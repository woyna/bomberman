#include "PopUp.h"



PopUp::PopUp(Texture &texture, Vector2f position, Font &font)
{
	popup.setSize(Vector2f(400.0f, 300.0f));
	popup.setPosition(position);
	popup.setOutlineThickness(10);
	popup.setOutlineColor(Color(50, 50, 50));
	popup.setTexture(&texture);

	font.loadFromFile("fonts/menu_font.ttf");

	position.x += 110.0f;
	position.y += 65.0f;

	button[0].setFont(font);
	button[0].setCharacterSize(60);
	button[0].setOutlineThickness(5);
	button[0].setPosition(position);
	button[0].setString("RESUME");

	position.x -= 45.0f;
	position.y += 100.0f;

	button[1].setFont(font);
	button[1].setCharacterSize(60);
	button[1].setOutlineThickness(5);
	button[1].setPosition(position);
	button[1].setString("EXIT TO MENU");

	button[0].setFillColor(Color::Yellow);
	selectedIndex = 0;
}


PopUp::~PopUp()
{
}

void PopUp::draw(RenderWindow & window)
{
	window.draw(popup);
	window.draw(button[0]);
	window.draw(button[1]);
}

void PopUp::Move()
{
	if (selectedIndex == 0)
	{
		button[0].setFillColor(Color::White);
		button[1].setFillColor(Color::Yellow);
		selectedIndex = 1;
	}
	else if (selectedIndex == 1)
	{
		button[1].setFillColor(Color::White);
		button[0].setFillColor(Color::Yellow);
		selectedIndex = 0;
	}
}
