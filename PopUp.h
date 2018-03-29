#pragma once
#ifndef POPUP_H
#define POPUP_H
#include <SFML/Graphics.hpp>

using namespace sf;

class PopUp
{
private:
	RectangleShape popup;
	Text button[2];
	int selectedIndex;

public:
	PopUp(Texture &texture, Vector2f position, Font &font);
	~PopUp();

	void draw(RenderWindow &window);
	void Move();

	//getters:
	int getSelectedIndex() { return selectedIndex; }

};

#endif