#include "Player.h"

namespace Direction
{
	int down = 0;
	int up = 2;
	int left = 1;
	int right = 3;
}

Player::Player(Texture &texture, Vector2u imageCount_tmp, float switchTime_tmp, float speed_tmp, bool player_id_tmp, const Keyboard::Key keyPlant_tmp, const Keyboard::Key keySpecial_tmp,
	Vector2f startingPosition, Texture &dead_texture, SoundBuffer *screamSoundBuffer, unsigned int volumeLevel) :
	animation(texture, imageCount_tmp, switchTime_tmp)
{
	speed = speed_tmp;
	direction = Direction::down;
	row = 0;
	max_ammo = 1;
	ammo = 1;
	bomb_range = 1;
	player_id = player_id_tmp;
	keyPlant = keyPlant_tmp;
	keySpecial = keySpecial_tmp;
	isDead = false;
	hasSpecial = false;
	specialID = 0;

	body.setSize(Vector2f(65, 65));
	body.setOrigin(body.getSize() / 2.0f);
	body.setPosition(startingPosition);
	body.setTexture(&texture);

	bombPosition = body.getPosition();

	deadTexture = dead_texture;

	plantBan = 0.0f;
	blocker = 0.0f;

	screamSound = new Sound();
	screamSound->setBuffer(*screamSoundBuffer);

	switch (volumeLevel)
	{
	case 0:
		screamSound->setVolume(0); break;
	case 1:
		screamSound->setVolume(10); break;
	case 2:
		screamSound->setVolume(25); break;
	case 3:
		screamSound->setVolume(50); break;
	case 4:
		screamSound->setVolume(100); break;
	}

}


Player::~Player()
{
}


void Player::Update(float deltaTime, Bomb* bomb[], C4* c4[], Grenade* grenade[])
{
	plantBan += deltaTime;
	blocker += deltaTime;
	if (plantBan > 1000) plantBan = 0;

	Vector2f movement(0.0f, 0.0f);
	
	if (isDead == false)
	{
		switch (player_id)
		{
		case 0:
			if (Keyboard::isKeyPressed(Keyboard::Up))
			{
				movement.y -= speed * deltaTime;
				row = 1;
				if (direction != Direction::up) direction = Direction::up;

			}
			else if (Keyboard::isKeyPressed(Keyboard::Right))
			{
				movement.x += speed * deltaTime;
				row = 2;
				if (direction != Direction::right) direction = Direction::right;
			}
			else if (Keyboard::isKeyPressed(Keyboard::Down))
			{
				movement.y += speed * deltaTime;
				row = 0;
				if (direction != Direction::down) direction = Direction::down;
			}
			else if (Keyboard::isKeyPressed(Keyboard::Left))
			{
				movement.x -= speed * deltaTime;
				row = 3;
				if (direction != Direction::left) direction = Direction::left;
			}
			else if (Keyboard::isKeyPressed(keyPlant) && ammo > 0 && plantBan > 0.8f)
			{
				for (int i = 0; i < (MAX_BOMB*2); i++)
				{
					if (!bomb[i]->getIsPlanted())
					{
						plantBan = 0;
						bomb[i]->plant(bombPosition);
						bomb[i]->setRange(bomb_range);
						bomb[i]->setOwner(0);
						ammo--;
						break;
					}
				}
			}
			else if (Keyboard::isKeyPressed(keySpecial))
			{
				if (specialID == 1)
				{
						for (int i = 0; i < numSpecials; i++)
						{
							if (hasSpecial && c4[i]->getIsPlanted() == false && blocker >= 0.5f)
							{
								c4[i]->plant(bombPosition);
								c4[i]->setOwner(0);
								specialID = 2;
								blocker = 0.0f;
								break;
							}
						}
				}
				else if (specialID == 2)
				{
					if (blocker >= 0.6f)
					{
						for (int i = 0; i < numSpecials; i++)
						{
							if (c4[i]->getIsPlanted() && c4[i]->getOwner() == 0)
							{
								c4[i]->explode();
								hasSpecial = false;
								blocker = 0.0f;
								specialID = 0;
								break;
							}
						}
					}
				}
				else if (specialID == 3)
				{
					for (int i = 0; i < numSpecials; i++)
					{
						if (hasSpecial && !grenade[i]->getIsThrown() && blocker >= 0.5f)
						{
							grenade[i]->setOwner(0);
							grenade[i]->Throw(direction, body.getPosition());
							hasSpecial = false;
							blocker = 0.0f;
							specialID = 0;
							break;
						}
					}
				}
			}

			break;

		case 1:
			if (Keyboard::isKeyPressed(Keyboard::W))
			{
				movement.y -= speed * deltaTime;
				row = 1;
				if (direction != Direction::up) direction = Direction::up;
			}
			else if (Keyboard::isKeyPressed(Keyboard::D))
			{
				movement.x += speed * deltaTime;
				row = 2;
				if (direction != Direction::right) direction = Direction::right;
			}
			else if (Keyboard::isKeyPressed(Keyboard::S))
			{
				movement.y += speed * deltaTime;
				row = 0;
				if (direction != Direction::down) direction = Direction::down;
			}
			else if (Keyboard::isKeyPressed(Keyboard::A))
			{
				movement.x -= speed * deltaTime;
				row = 3;
				if (direction != Direction::left) direction = Direction::left;
			}
			else if (Keyboard::isKeyPressed(keyPlant) && ammo > 0 && plantBan > 0.8f)
			{
				for (int i = 0; i < (MAX_BOMB * 2); i++)
				{
					if (!bomb[i]->getIsPlanted())
					{
						plantBan = 0;
						bomb[i]->plant(bombPosition);
						bomb[i]->setRange(bomb_range);
						bomb[i]->setOwner(1);
						ammo--;
						break;
					}
				}
			}
			else if (Keyboard::isKeyPressed(keySpecial))
			{
				if (specialID == 1)
				{
						for (int i = 0; i < numSpecials; i++)
						{
							if (hasSpecial && c4[i]->getIsPlanted() == false && blocker >= 0.5f)
							{
								c4[i]->plant(bombPosition);
								c4[i]->setOwner(1);
								blocker = 0.0f;
								specialID = 2;
								break;
							}
						}
				}
				else if (specialID == 2)
				{
					if (blocker >= 0.6f)
					{
						for (int i = 0; i < numSpecials; i++)
						{
							if (c4[i]->getIsPlanted() && c4[i]->getOwner() == 1)
							{
								c4[i]->explode();
								blocker = 0.0f;
								hasSpecial = false;
								specialID = 0;
								break;
							}
						}
					}
				}
				else if (specialID == 3)
				{
					for (int i = 0; i < numSpecials; i++)
					{
						if (hasSpecial && !grenade[i]->getIsThrown() && blocker >= 0.5f)
						{
							grenade[i]->setOwner(1);
							grenade[i]->Throw(direction, body.getPosition());
							hasSpecial = false;
							blocker = 0.0f;
							specialID = 0;
							break;
						}
					}
				}
			}
			break;
		}

		if (movement.x == 0 && movement.y == 0)
		{
			switch (direction)
			{
			case 0:
				row = 0;
				animation.rectTexture.left = 0;
				animation.rectTexture.top = row * 120;
				break;
			case 2:
				row = 1;
				animation.rectTexture.left = 0;
				animation.rectTexture.top = row * 120;
				break;
			case 3:
				row = 2;
				animation.rectTexture.left = 0;
				animation.rectTexture.top = row * 120;
				break;
			case 1:
				row = 3;
				animation.rectTexture.left = 0;
				animation.rectTexture.top = row * 120;
				break;
			}
		}
		else
		{
			animation.Update(row, deltaTime);
		}

		body.setTextureRect(animation.rectTexture);
		body.move(movement);
	}
}

void Player::draw(RenderWindow & window)
{
	window.draw(body);
}

void Player::die()
{
	screamSound->play();
	isDead = true;
	body.setTexture(&deadTexture);
	body.setTextureRect(IntRect(0,0,100,120));
}
