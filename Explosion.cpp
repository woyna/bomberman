#include "Explosion.h"


Explosion::Explosion(Texture &explosionTexture, SoundBuffer* explosionSoundBuffer, Vector2f position, unsigned int volumeLevel) :
	explosionAnimation(explosionTexture, Vector2u(4,1), 0.05f)
{
	explosionSound = new Sound();

	explosionSound->setBuffer(*explosionSoundBuffer);
	switch (volumeLevel)
	{
	case 0:
		explosionSound->setVolume(0); break;
	case 1:
		explosionSound->setVolume(10); break;
	case 2:
		explosionSound->setVolume(25); break;
	case 3:
		explosionSound->setVolume(50); break;
	case 4:
		explosionSound->setVolume(100); break;
	}

	explosion.setSize(Vector2f(90, 90));
	explosion.setOrigin(explosion.getSize() / 2.0f);
	explosion.setPosition(position);
	explosion.setTexture(&explosionTexture);

	Vector2f position_tmp = explosion.getPosition();
	position_tmp.x -= 20;
	position_tmp.y -= 20;
	positionCheck.setSize(Vector2f(35, 35));
	positionCheck.setPosition(position_tmp);

	position_tmp.x += 20;
	position_tmp.y += 20;
	explosionCheck.setSize(Vector2f(50, 50));
	explosionCheck.setOrigin(explosionCheck.getSize() / 2.0f);
	explosionCheck.setPosition(position_tmp);

	playPermission = true;
	isActive = false;
	totalTime = 0.0f;
}


Explosion::~Explosion()
{
	delete explosionSound;
}

void Explosion::draw(RenderWindow & window)
{
	window.draw(explosion);
}

void Explosion::Update(float deltaTime)
{
	totalTime += deltaTime;

	if (totalTime >= 0.8f)
	{
		isActive = false;
		totalTime = 0.0f;
		playPermission = true;
	}
	else
	{
		if (playPermission)
		{
			play(); playPermission = false;
		}
		explosionAnimation.Update(0, deltaTime);
		explosion.setTextureRect(explosionAnimation.rectTexture);
	}
}