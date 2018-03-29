#pragma once
#ifndef POWERUP_H
#define POWERUP_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"

using namespace sf;

class PowerUp
{
protected:
	RectangleShape powerup;
	Texture powerupTexture;
	IntRect rectTexture;
	Vector2u imageCount;
	Vector2u currentImage;
	bool isPickedUp;
	SoundBuffer* powerupSoundBuffer;
	Sound* powerupSound;

public:
	PowerUp();
	virtual ~PowerUp() { delete powerupSoundBuffer; delete powerupSound; };

	virtual void effect(Player &player) = 0;
	void draw(RenderWindow &window);
	Collider getCollider() { return Collider(powerup); }
};

class SpeedUp : public PowerUp
{
private:
	float speedAdded;

public:
	SpeedUp(Vector2f position, unsigned int volumeLevel);
	virtual ~SpeedUp() {} ;

	virtual void effect(Player &player) override;
};

class AddBomb : public PowerUp
{
public:
	AddBomb(Vector2f position, unsigned int  volumeLevel);
	virtual ~AddBomb() {};

	virtual void effect(Player &player) override;
};

class AddRange : public PowerUp
{
public:
	AddRange(Vector2f position, unsigned int volumeLevel);
	virtual ~AddRange() {};

	virtual void effect(Player &player) override;
};

class AddC4 : public PowerUp
{
public:
	AddC4(Vector2f position, unsigned int volumeLevel);
	virtual ~AddC4() {};

	virtual void effect(Player &player) override;
};

class AddGrenade : public PowerUp
{
public:
	AddGrenade(Vector2f position, unsigned int volumeLevel);
	virtual ~AddGrenade() {};

	virtual void effect(Player &player) override;
};


#endif