#pragma once
#ifndef C4_H
#define C4_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Animation.h"
#include "Collider.h"

using namespace sf;

class C4
{
private:
	RectangleShape c4;
	Animation animation;
	int owner;
	unsigned int range;
	Sound* plantingSound;
	bool isPlanted;
	bool isExploding;
	float totalTime;


public:
	C4(Texture &texture, SoundBuffer* plantingSound_tmp, unsigned int volumeLevel);
	~C4();

	void draw(RenderWindow &window);
	void plant(Vector2f position);
	void explode();
	void Update(float deltaTime);

	//getters:
	Collider getCollider() { return Collider(c4); }
	bool getIsPlanted() { return isPlanted; }
	bool getIsExploding() { return isExploding; }
	unsigned int getRange() { return range; }
	Vector2f getPosition() { return c4.getPosition(); }
	int getOwner() { return owner; }


	//setters:
	void changePlant() { if (isPlanted) isPlanted = 0; else isPlanted = 1; }
	void changeExplode() { isExploding = false; }
	void setOwner(int ownerID) { owner = ownerID; }
};

#endif