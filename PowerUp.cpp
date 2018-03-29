#include "PowerUp.h"
#include <Windows.h>


PowerUp::PowerUp()
{
	if (!powerupTexture.loadFromFile("textures/powerups.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The powerup texture cannot be loaded. Make sure there is 'powerups.png' file in 'textures' directory and start the application again", "POWERUP TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
	}

	powerupSoundBuffer = new SoundBuffer();

	if (!powerupSoundBuffer->loadFromFile("sounds/powerup.ogg"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The powerup sound cannot be loaded. Make sure there is 'powerup.wav' file in 'sounds' directory and start the application again", "POWERUP SOUND NOT FOUND", MB_ICONERROR | MB_OK);
	}

	imageCount = Vector2u(5, 1);
	currentImage.y = 0;

	rectTexture.width = powerupTexture.getSize().x / float(imageCount.x);
	rectTexture.height = powerupTexture.getSize().y / float(imageCount.y);
	rectTexture.top = 0;

	powerupSound = new Sound();
	powerupSound->setBuffer(*powerupSoundBuffer);
	powerupSound->setVolume(50);

	powerup.setSize(Vector2f(60, 60));
	powerup.setOrigin(powerup.getSize() / 2.0f);
	powerup.setPosition(Vector2f(2000, 1100));
	powerup.setTexture(&powerupTexture);
}

void PowerUp::draw(RenderWindow & window)
{
	window.draw(powerup);
}

SpeedUp::SpeedUp(Vector2f position, unsigned int volumeLevel)
{
	speedAdded = 30.0f;

	currentImage.x = 0;
	rectTexture.left = currentImage.x * rectTexture.width;

	powerup.setPosition(position);
	powerup.setTextureRect(rectTexture);

	switch (volumeLevel)
	{
	case 0:
		powerupSound->setVolume(0); break;
	case 1:
		powerupSound->setVolume(15); break;
	case 2:
		powerupSound->setVolume(35); break;
	case 3:
		powerupSound->setVolume(65); break;
	case 4:
		powerupSound->setVolume(100); break;
	}
}

void SpeedUp::effect(Player &player)
{
	if(player.speed<260.0f)
	player.speed += speedAdded;

	powerupSound->play();

	powerup.setPosition(Vector2f(2000, 1100));
}

AddBomb::AddBomb(Vector2f position, unsigned int volumeLevel)
{
	currentImage.x = 1;
	rectTexture.left = currentImage.x * rectTexture.width;

	powerup.setPosition(position);
	powerup.setTextureRect(rectTexture);

	switch (volumeLevel)
	{
	case 0:
		powerupSound->setVolume(0); break;
	case 1:
		powerupSound->setVolume(15); break;
	case 2:
		powerupSound->setVolume(35); break;
	case 3:
		powerupSound->setVolume(65); break;
	case 4:
		powerupSound->setVolume(100); break;
	}
}

void AddBomb::effect(Player &player)
{
	if (player.max_ammo < 3)
	{
		player.ammo++;
		player.max_ammo++;
	}

	powerupSound->play();

	powerup.setPosition(Vector2f(2000, 1100));
}

AddRange::AddRange(Vector2f position, unsigned int volumeLevel)
{
	currentImage.x = 2;
	rectTexture.left = currentImage.x * rectTexture.width;

	powerup.setPosition(position);
	powerup.setTextureRect(rectTexture);

	switch (volumeLevel)
	{
	case 0:
		powerupSound->setVolume(0); break;
	case 1:
		powerupSound->setVolume(15); break;
	case 2:
		powerupSound->setVolume(35); break;
	case 3:
		powerupSound->setVolume(65); break;
	case 4:
		powerupSound->setVolume(100); break;
	}
}

void AddRange::effect(Player & player)
{
	if (player.bomb_range < 10)
		player.bomb_range++;

	powerupSound->play();

	powerup.setPosition(Vector2f(2000, 1100));
}

AddC4::AddC4(Vector2f position, unsigned int volumeLevel)
{
	currentImage.x = 3;
	rectTexture.left = currentImage.x * rectTexture.width;

	powerup.setPosition(position);
	powerup.setTextureRect(rectTexture);

	switch (volumeLevel)
	{
	case 0:
		powerupSound->setVolume(0); break;
	case 1:
		powerupSound->setVolume(15); break;
	case 2:
		powerupSound->setVolume(35); break;
	case 3:
		powerupSound->setVolume(65); break;
	case 4:
		powerupSound->setVolume(100); break;
	}
}

void AddC4::effect(Player & player)
{
	if (!player.hasSpecial)
	{
		player.hasSpecial = true;
		player.setSpecial(1);
		powerupSound->play();
		powerup.setPosition(Vector2f(2000, 1100));
	}
}

AddGrenade::AddGrenade(Vector2f position, unsigned int volumeLevel)
{
	currentImage.x = 4;
	rectTexture.left = currentImage.x * rectTexture.width;

	powerup.setPosition(position);
	powerup.setTextureRect(rectTexture);

	switch (volumeLevel)
	{
	case 0:
		powerupSound->setVolume(0); break;
	case 1:
		powerupSound->setVolume(15); break;
	case 2:
		powerupSound->setVolume(35); break;
	case 3:
		powerupSound->setVolume(65); break;
	case 4:
		powerupSound->setVolume(100); break;
	}
}

void AddGrenade::effect(Player & player)
{
	if (!player.hasSpecial)
	{
		player.hasSpecial = true;
		player.setSpecial(3);
		powerupSound->play();
		powerup.setPosition(Vector2f(2000, 1100));
	}
}
