#pragma once
#ifndef PLAYER_H
#define PLAYER_H
#include <SFML/Graphics.hpp>
#include "Definitions.h"
#include "Animation.h"
#include "Block.h"
#include "Collider.h"
#include "Bomb.h"
#include "Explosion.h"
#include "C4.h"
#include "Grenade.h"

using namespace sf;

class Player
{
	friend class SpeedUp;
	friend class AddBomb;
	friend class AddRange;
	friend class PlayerInfo;

private:
	RectangleShape body;
	Animation animation;
	unsigned int row;
	unsigned int ammo;
	int max_ammo;
	float speed;
	float plantBan;
	float blocker;
	Vector2f bombPosition;
	unsigned int bomb_range;
	bool player_id;
	Keyboard::Key keyPlant;
	Keyboard::Key keySpecial;
	bool isDead;
	Texture deadTexture;
	Sound *screamSound;
	int specialID;
	int direction;

public:
	Player(Texture &texture, Vector2u imageCount_tmp, float switchTime_tmp, float speed_tmp, bool player_id_tmp, const Keyboard::Key keyPlant_tmp, const Keyboard::Key keySpecial_tmp, 
		Vector2f startingPosition, Texture &dead_texture, SoundBuffer* screamSoundBuffer, unsigned int volumeLevel);
	~Player();

	bool hasSpecial;

	void Update(float deltaTime, Bomb* bomb[], C4* c4[], Grenade* grenade[]);
	void draw(RenderWindow &window);
	void die();

	//setters:
	void ammoUp() { ammo++; }
	void setPosition(Vector2f position) { bombPosition = position; }
	void setSpecial(int id) { specialID = id; }

	//getters:
	Collider getCollider() { return Collider(body); }
	bool getIsDead() { return isDead; }
	Vector2f getPosition() { return body.getPosition(); }
	int getSpecialID() { return specialID; }
};


#endif