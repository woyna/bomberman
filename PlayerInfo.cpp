#include "PlayerInfo.h"
#include <string>


PlayerInfo::PlayerInfo(Texture &faceTexture, int textureIndex, Vector2f position_tmp, int playerIndex, Texture &powerupTexture, Texture &specialTexture, Font &font)
{
	Vector2f position = position_tmp;
	IntRect rectTexture;
	rectTexture.height = rectTexture.width = 250;
	rectTexture.top = 0;
	rectTexture.left = rectTexture.width * textureIndex;

	playerFace.setSize(Vector2f(170, 170));
	playerFace.setTexture(&faceTexture);
	playerFace.setTextureRect(rectTexture);
	playerFace.setPosition(position);


	font.loadFromFile("fonts/menu_font.ttf");
	name.setFont(font);
	name.setCharacterSize(60);
	name.setOutlineThickness(5);
	position.y += 165;
	name.setPosition(position);

	switch (playerIndex)
	{
		case 0:
			name.setString("PLAYER 1"); break;
		case 1:
			name.setString("PLAYER 2"); break;
	}

	rectTexture.height = rectTexture.width = 55;
	rectTexture.left = 0;
	position.x -= 55;
	position.y += 20;

	for (int i = 0; i < 3; i++)
	{
		position.y += 60;
		rectTexture.left = i * 55;
		statsIcons[i].setTexture(&powerupTexture);
		statsIcons[i].setTextureRect(rectTexture);
		statsIcons[i].setPosition(position);
		statsIcons[i].setSize(Vector2f(55, 55));
	}

	position = statsIcons[0].getPosition();
	position.x += 80;
	position.y -= 50;

	for (int i = 0; i < 4; i++)
	{
		position.y += 60;
		stats[i].setFont(font);
		stats[i].setPosition(position);
		stats[i].setCharacterSize(30);
		stats[i].setOutlineThickness(3);
	}

	stats[0].setString("SPEED");
	stats[1].setString("BOMBS");
	stats[2].setString("RANGE");

	position.x -= 65;
	position.y += 5;
	stats[3].setPosition(position);
	stats[3].setString("SPECIAL WEAPON");

	position = stats[0].getPosition();
	position.x += 130;
	position.y -= 60;

	for (int i = 0; i < 3; i++)
	{
		position.y += 60;
		statsValue[i].setFont(font);
		statsValue[i].setPosition(position);
		statsValue[i].setCharacterSize(30);
		statsValue[i].setOutlineThickness(3);
	}

	speedLevel = 1;

	statsValue[0].setString("1");
	statsValue[1].setString("1");
	statsValue[2].setString("1");

	position = stats[3].getPosition();
	position.x += 195;
	position.y -= 5;

	specialRect.height = specialRect.width = 45;
	specialRect.top = specialRect.left = 0;

	specialWeapon.setTexture(&specialTexture);
	specialWeapon.setTextureRect(specialRect);
	specialWeapon.setSize(Vector2f(45, 45));
	specialWeapon.setOutlineThickness(3);
	specialWeapon.setOutlineColor(Color(160, 160, 160));
	specialWeapon.setPosition(position);
}


PlayerInfo::~PlayerInfo()
{
}

void PlayerInfo::draw(RenderWindow &window)
{
	window.draw(playerFace);
	window.draw(name);

	for (int i = 0; i < 3; i++)
	{
		window.draw(statsIcons[i]);
	}

	for (int i = 0; i < 4; i++)
	{
		window.draw(stats[i]);
	}

	for (int i = 0; i < 3; i++)
	{
		window.draw(statsValue[i]);
	}
	window.draw(specialWeapon);
}

void PlayerInfo::Update(Player player)
{
	switch (int(player.speed))
	{
	case 140:
		speedLevel = 1; break;
	case 170:
		speedLevel = 2; break;
	case 200:
		speedLevel = 3; break;
	case 230:
		speedLevel = 4; break;
	case 260:
		speedLevel = 5; break;
	}

	statsValueSTD[0] = statsValue[0].getString();
	statsValueINT[0] = stoi(statsValueSTD[0], nullptr);

	if (speedLevel != statsValueINT[0])
	{
		statsValueSTD[0] = to_string(speedLevel);
		statsValue[0].setString(statsValueSTD[0]);
	}

	statsValueSTD[1] = statsValue[1].getString();
	statsValueINT[1] = stoi(statsValueSTD[1], nullptr);

	if (player.max_ammo != statsValueINT[1])
	{
		statsValueSTD[1] = to_string(player.max_ammo);
		statsValue[1].setString(statsValueSTD[1]);
	}

	statsValueSTD[2] = statsValue[2].getString();
	statsValueINT[2] = stoi(statsValueSTD[2], nullptr);

	if (player.bomb_range != statsValueINT[2])
	{
		statsValueSTD[2] = to_string(player.bomb_range);
		statsValue[2].setString(statsValueSTD[2]);
	}

	if (player.hasSpecial)
	{
		switch (player.getSpecialID())
		{
		case 1:
			specialRect.left = 1 * 45; break;
		case 2:
			specialRect.left = 2 * 45; break;
		case 3:
			specialRect.left = 3 * 45; break;
		}
	}

	else specialRect.left = 0;

	specialWeapon.setTextureRect(specialRect);
}
