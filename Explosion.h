#pragma once
#ifndef EXPLOSION_H
#define EXPLOSION_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Bomb.h"
#include "Block.h"
#include "Collider.h"

using namespace sf;

class Explosion
{
private:
	RectangleShape explosion;
	RectangleShape positionCheck;
	RectangleShape explosionCheck;
	Texture explosionTexture;
	Animation explosionAnimation;
	Sound* explosionSound;
	unsigned int range;
	float totalTime;
	bool isActive;
	bool playPermission;

public:
	Explosion(Texture &explosionTexture, SoundBuffer* explosionSoundBuffer, Vector2f position, unsigned int volumeLevel);
	~Explosion();

	void draw(RenderWindow &window);
	void Update(float deltaTime);
	void play() { explosionSound->play(); }

	//setters:
	void changeActive() { if (isActive) isActive = false; else isActive = true; }
	void setRange(unsigned int range_t) { range = range_t; }

	//getters:
	Vector2f getPosition() { return explosion.getPosition(); }
	bool getIsActive() { return isActive; }
	Collider getCollider() { return Collider(explosion); }
	Collider getCollider2() { return Collider(positionCheck); }
	Collider getCollider3() { return Collider(explosionCheck); }
};

#endif