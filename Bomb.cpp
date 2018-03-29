#include "Bomb.h"

Bomb::Bomb(Texture &bombTexture, SoundBuffer* ignitionSound_tmp, unsigned int volumeLevel) :
	ignitionAnimation(bombTexture, Vector2u(2, 1), 0.1f)
{
	isPlanted = false;
	isExploding = false;
	range = 1;
	ignitionTime = 3.7f;
	totalTime = 0.0f;

	bomb.setSize(Vector2f(60, 64));
	bomb.setOrigin(bomb.getSize() / 2.0f);
	bomb.setPosition(Vector2f(2000, 1100));
	bomb.setTexture(&bombTexture);

	ignitionSound = new Sound();

	ignitionSound->setBuffer(*ignitionSound_tmp);
	switch (volumeLevel)
	{
	case 0:
		ignitionSound->setVolume(0); break;
	case 1:
		ignitionSound->setVolume(2); break;
	case 2:
		ignitionSound->setVolume(5); break;
	case 3:
		ignitionSound->setVolume(10); break;
	case 4:
		ignitionSound->setVolume(25); break;
	}
}

Bomb::~Bomb()
{
	delete ignitionSound;
}

void Bomb::draw(RenderWindow & window)
{
	window.draw(bomb);
}

void Bomb::plant(Vector2f position)
{
	bomb.setPosition(position);
	setRange(range);
	changePlant();
	ignitionSound->play();
}

void Bomb::explode(float deltaTime)
{
	totalTime += deltaTime;

	if (totalTime >= ignitionTime)
	{
		isExploding = 1;
		isPlanted = 0;
		totalTime = 0;
		ignitionSound->stop();
	}
}

void Bomb::Update(float deltaTime)
{
	ignitionAnimation.Update(0, deltaTime);
	bomb.setTextureRect(ignitionAnimation.rectTexture);
}