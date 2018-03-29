#pragma once
#ifndef ANIMATION_H
#define ANIMATION_H
#include <SFML/Graphics.hpp>

using namespace sf;

class Animation
{
private:
	Vector2u imageCount;
	Vector2u currentImage;
	float totalTime;
	float switchTime;

public:
	Animation(Texture &texture, Vector2u imageCount_tmp, float switchTime_tmp);
	~Animation();

	void Update(unsigned int row, float deltaTime);
	void Update2(unsigned int row, float deltaTime);
	void Reinitialize(Texture &texture, Vector2u imageCount_tmp, float switchTime_tmp);
	IntRect rectTexture;
};

#endif