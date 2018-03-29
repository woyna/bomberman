#pragma once
#ifndef BOMB_H
#define BOMB_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Animation.h"
#include "Collider.h"

using namespace sf;

class Bomb
{
private:
	RectangleShape bomb;
	unsigned int range;
	float ignitionTime;
	float totalTime;
	Sound* ignitionSound;
	Animation ignitionAnimation;
	bool isPlanted;
	bool isExploding;
	int owner;

public:

	Bomb(Texture &bombTexture, SoundBuffer* ignitionSound_tmp, unsigned int volumeLevel);
	~Bomb();

	void draw(RenderWindow &window);
	void plant(Vector2f position);
	void explode(float deltaTime);
	void Update(float deltaTime);

	//setters:
	void setPosition(Vector2f position) { bomb.setPosition(position); }
	void setRange(unsigned int range_tmp) { range = range_tmp; }
	void changePlant() { if (isPlanted) isPlanted = 0; else isPlanted = 1; }
	void changeExplode() { isExploding = false; }
	void setOwner(int ownerID) { owner = ownerID; }

	//getters:
	Collider getCollider() { return Collider(bomb); }
	bool getIsPlanted() { return isPlanted; }
	bool getIsExploding() { return isExploding; }
	unsigned int getRange() { return range; }
	Vector2f getPosition() { return bomb.getPosition(); }
	int getOwner() { return owner; }
};

#endif