#pragma once
#ifndef BLOCK_H
#define BLOCK_H
#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Collider.h"

using namespace sf;

class Block
{
private:
	RectangleShape block;
	Texture blockTexture;
	Vector2f position;
	bool isDestroyable;
	bool isExploded;
	bool isCollapsed;

public:
	Block(Texture &texture, Vector2f size, Vector2f position_tmp, bool isDestroyable_tmp);
	~Block();

	void draw(RenderWindow &window);
	void collapse();

	//getters:
	Collider getCollider() { return Collider(block); }
	bool getIsExploded() { return isExploded; }
	bool getIsCollapsed() { return isCollapsed; }
	Vector2f getPosition() { return block.getPosition(); }

	//setters:
	void changeExploded() { if (isExploded) isExploded = false; else isExploded = true; }
	void setPosition(Vector2f position) { block.setPosition(position); }
};

#endif