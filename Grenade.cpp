#include "Grenade.h"

Grenade::Grenade(Texture &texture, SoundBuffer* throwingSound_tmp, unsigned int volumeLevel)
{
	throwSpeed = 280.0f;
	range = 8;
	rangeCount = 0;
	direction = 0;
	isThrown = false;

	grenade.setSize(Vector2f(35, 42));
	grenade.setOrigin(grenade.getSize() / 2.0f);
	grenade.setPosition(Vector2f(2000, 1100));
	grenade.setTexture(&texture);

	throwingSound = new Sound(*throwingSound_tmp);

	switch (volumeLevel)
	{
	case 0:
		throwingSound->setVolume(0); break;
	case 1:
		throwingSound->setVolume(10); break;
	case 2:
		throwingSound->setVolume(40); break;
	case 3:
		throwingSound->setVolume(60); break;
	case 4:
		throwingSound->setVolume(100); break;
	}

	for (int i = 0; i < range; i++)
	{
		tab[i] = -1;
	}
}


Grenade::~Grenade()
{
	delete throwingSound;
}

void Grenade::draw(RenderWindow & window)
{
	window.draw(grenade);
}

void Grenade::Throw(int direction_tmp, Vector2f position)
{
	grenade.setPosition(position);
	isThrown = true;
	direction = direction_tmp;

	throwingSound->play();
}

void Grenade::Update(float deltaTime)
{
	Vector2f movement(0.0f, 0.0f);

	switch (direction)
	{
	case 0:
		movement.y += throwSpeed * deltaTime;
		break;
	case 2:
		movement.y -= throwSpeed * deltaTime;
		break;
	case 1:
		movement.x -= throwSpeed * deltaTime;
		break;
	case 3:
		movement.x += throwSpeed * deltaTime;
		break;
	}

	grenade.move(movement);
}

void Grenade::rangeCounter(int rowNumber, int columnNumber)
{
	if (isThrown)
	{
		if (direction == 0 || direction == 2)
		{
			if (tab[rangeCount] == -1 && tab[rangeCount - 1] != rowNumber && rangeCount != 0)
			{
				tab[rangeCount] = rowNumber;
				rangeCount++;
			}
			else if (rangeCount == 0)
			{
				tab[rangeCount] = rowNumber;
				rangeCount++;
			}
		}

		if (direction == 1 || direction == 3)
		{
			if (tab[rangeCount] == -1 && tab[rangeCount - 1] != columnNumber && rangeCount != 0)
			{
				tab[rangeCount] = columnNumber;
				rangeCount++;
			}
			else if (rangeCount == 0)
			{
				tab[rangeCount] = columnNumber;
				rangeCount++;
			}
		}

		if (rangeCount == (range-1)) explode();
	}
}

void Grenade::explode()
{
	isExploding = true;
	isThrown = false;
	owner = 3;
	rangeCount = 0;

	for (int i = 0; i < range; i++)
	{
		tab[i] = -1;
	}
}

void Grenade::move()
{
	switch (direction)
	{
	case 0:
		grenade.move(Vector2f(0, -30));
		break;
	case 2:
		grenade.move(Vector2f(0, 30));
		break;
	case 1:
		grenade.move(Vector2f(30, 0));
		break;
	case 3:
		grenade.move(Vector2f(-30, 0));
		break;
	}
}
