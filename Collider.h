#pragma once
#ifndef COLLIDER_H
#define COLLIDER_H
#include <SFML/Graphics.hpp>

using namespace sf;

class Collider
{
private:
	RectangleShape &body;

public:
	Collider(RectangleShape &body);
	~Collider();

	void Move(float dx, float dy) { body.move(dx, dy); }
	bool checkCollision(Collider &other, float push);
	bool checkCollision2(Collider &other);

	//getters:
	Vector2f GetPosition() { return body.getPosition(); }
	Vector2f GetHalfSize() { return body.getSize() / 2.0f; }
};

#endif