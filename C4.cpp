#include "C4.h"



C4::C4(Texture &texture, SoundBuffer* plantingSound_tmp, unsigned int volumeLevel) :
	animation(texture, Vector2u(2,1), 0.8f)
{
	range = 2;
	isPlanted = false;
	isExploding = false;
	owner = 3;
	totalTime = 0.0f;

	c4.setSize(Vector2f(60, 60));
	c4.setOrigin(c4.getSize() / 2.0f);
	c4.setPosition(Vector2f(2000, 1100));
	c4.setTexture(&texture);

	plantingSound = new Sound(*plantingSound_tmp);

	switch (volumeLevel)
	{
	case 0:
		plantingSound->setVolume(0); break;
	case 1:
		plantingSound->setVolume(2); break;
	case 2:
		plantingSound->setVolume(5); break;
	case 3:
		plantingSound->setVolume(10); break;
	case 4:
		plantingSound->setVolume(25); break;
	}
}


C4::~C4()
{
	delete plantingSound;
}

void C4::draw(RenderWindow & window)
{
	window.draw(c4);
}

void C4::plant(Vector2f position)
{
	isPlanted = true;
	c4.setPosition(position);
	plantingSound->play();
}

void C4::explode()
{
	isPlanted = false;
	isExploding = true;
	owner = 3;
}

void C4::Update(float deltaTime)
{
	animation.Update2(0, deltaTime);
	c4.setTextureRect(animation.rectTexture);
}
