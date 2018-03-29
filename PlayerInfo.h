#pragma once
#ifndef PLAYERINFO_H
#define PLAYERINFO_H
#include <SFML/Graphics.hpp>
#include "Player.h"

using namespace sf;
using namespace std;

class PlayerInfo
{
private:

	RectangleShape playerFace;
	RectangleShape statsIcons[3];
	RectangleShape specialWeapon;
	IntRect specialRect;
	Text stats[4];
	Text statsValue[3];
	Text name;
	string statsValueSTD[3];
	int statsValueINT[3];
	int speedLevel;

public:
	PlayerInfo(Texture &texture, int textureIndex, Vector2f position_tmp, int playerIndex, Texture &powerupTexture, Texture &specialTexture, Font &font);
	~PlayerInfo();

	void draw(RenderWindow &window);
	void Update(Player player);
};

#endif