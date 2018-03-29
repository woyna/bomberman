#pragma once
#ifndef GRENADE_H
#define GRENADE_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Animation.h"
#include "Collider.h"

using namespace sf;

class Grenade
{
private:
	RectangleShape grenade;
	float throwSpeed;
	int direction;
	int range, rangeCount;
	int owner;
	Sound* throwingSound;
	bool isThrown;
	bool isExploding;
	int tab[8];

public:
	Grenade(Texture &texture, SoundBuffer* throwingSound_tmp, unsigned int volumeLevel);
	~Grenade();

	void draw(RenderWindow &window);
	void Throw(int direction_tmp, Vector2f position);
	void Update(float deltaTime);
	void rangeCounter(int rowNumber, int columnNumber);
	void explode();
	void move();

	//getters:
	Collider getCollider() { return Collider(grenade); }
	bool getIsThrown() { return isThrown; }
	bool getIsExploding() { return isExploding; }
	Vector2f getPosition() { return grenade.getPosition(); }
	int getOwner() { return owner; }

	//setters:
	void changeExplode() { isExploding = false;  grenade.setPosition(Vector2f(2000, 1100)); }
	void setOwner(int ownerID) { owner = ownerID; }
};

#endif