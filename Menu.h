#pragma once
#ifndef MENU_H
#define MENU_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "GameCustomization.h"
#define MAX_BUTTONS 5

using namespace std;
using namespace sf;

enum MenuType
{
	MainMenu = 1,
	OptionsMenu = 2,
	GameCustomizationMenu = 3
};

class Menu
{
private:
	int buttons_qty;
	int button_index;
	int volume_id;
	bool IfFullscreen;
	Font font;
	Text buttons[MAX_BUTTONS];
	Sprite background;
	Texture background_texture;
	Text author;

public:
	Menu(float width, float height, RenderWindow &window, MenuType menu_type);
	~Menu();

	void draw(RenderWindow &window);
	void MoveUp();
	void MoveDown();

	//getters:
	int GetSelectedIndex();
	int GetVolumeLevel();

	//setters:
	void ChangeButtonText(int i);
};

void load(RenderWindow &window, Font &font, Texture &background_texture);

#endif