#include "Menu.h"
#include <Windows.h>

void load(RenderWindow &window, Font &font, Texture &background_texture)
{
	if (!font.loadFromFile("fonts/menu_font.ttf"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The font cannot be loaded. Make sure there is 'menu_font.ttf' file in 'fonts' directory and start the application again", "FONT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!background_texture.loadFromFile("textures/menu_background.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The background cannot be loaded. Make sure there is 'menu_background.jpg' file in 'textures' directory and start the application again", "BACKGROUND NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

Menu::Menu(float width, float heigth, RenderWindow &window, MenuType menu_type)
{
	load(window, font, background_texture);

	background.setTexture(background_texture);
	background.setPosition(Vector2f(0, 0));

	volume_id = 2;

	switch (menu_type)
	{
	case 1:
		for (int i = 0; i < 3; i++)
		{
			buttons[i].setFont(font);
			buttons[i].setCharacterSize(80);
			buttons[i].setOutlineThickness(5);
			buttons[i].setOutlineColor(Color::Black);
		}
		buttons[0].setString("Play");
		buttons[0].setPosition(Vector2f(815, 685));
		buttons[1].setString("Options");
		buttons[1].setPosition(Vector2f(815, 775));
		buttons[2].setString("Exit");
		buttons[2].setPosition(Vector2f(815, 865));

		buttons_qty = 3;

		break;

	case 2:
		for (int i = 0; i < 3; i++)
		{
			buttons[i].setFont(font);
			buttons[i].setCharacterSize(80);
			buttons[i].setOutlineThickness(5);
			buttons[i].setOutlineColor(Color::Black);
		}
		buttons[0].setString("Fullscreen off");
		buttons[0].setPosition(Vector2f(780, 685));
		buttons[1].setString("Volume 50%");
		buttons[1].setPosition(Vector2f(780, 775));
		buttons[2].setString("Back");
		buttons[2].setPosition(Vector2f(780, 865));

		buttons_qty = 3;

		break;
	}

	button_index = 0;
	buttons[0].setFillColor(Color::Yellow);

	author.setFont(font);
	author.setCharacterSize(25);
	author.setString("CREATED BY WOJCIECH PRZYBYLSKI");
	author.setPosition(Vector2f(25, 1035));
	author.setOutlineThickness(2);
	author.setOutlineColor(Color::Black);
}


Menu::~Menu()
{
}

void Menu::draw(RenderWindow &window)
{
	window.draw(background);

	for (int i = 0; i < MAX_BUTTONS; i++)
	{
		window.draw(buttons[i]);
	}

	window.draw(author);
}

void Menu::MoveDown()
{
	if (button_index == (buttons_qty - 1))
	{
		buttons[button_index].setFillColor(Color::White);
		buttons[0].setFillColor(Color::Yellow);
		button_index = 0;
	}
	else
	{
		buttons[button_index].setFillColor(Color::White);
		buttons[button_index + 1].setFillColor(Color::Yellow);
		button_index += 1;
	}
}

void Menu::MoveUp()
{
	if (button_index == 0)
	{
		buttons[button_index].setFillColor(Color::White);
		buttons[buttons_qty-1].setFillColor(Color::Yellow);
		button_index = buttons_qty-1;
	}
	else
	{
		buttons[button_index].setFillColor(Color::White);
		buttons[button_index - 1].setFillColor(Color::Yellow);
		button_index -= 1;
	}
}

int Menu::GetSelectedIndex()
{
	return button_index;
}

void Menu::ChangeButtonText(int i)
{
	if (i == 1)
		switch (IfFullscreen)
		{
		case 0:
			buttons[0].setString("Fullscreen ON"); IfFullscreen = 1; break;
		case 1:
			buttons[0].setString("Fullscreen OFF"); IfFullscreen = 0; break;
		}
	else if (i == 2)
	{
		switch (volume_id)
		{
		case 0:
			buttons[1].setString("Volume 25%"); volume_id = 1; break;
		case 1:
			buttons[1].setString("Volume 50%"); volume_id = 2; break;
		case 2:
			buttons[1].setString("Volume 75%"); volume_id = 3; break;
		case 3:
			buttons[1].setString("Volume 100%"); volume_id = 4; break;
		case 4:
			buttons[1].setString("Volume MUTED"); volume_id = 0; break;
		}
	}
}

int Menu::GetVolumeLevel()
{
	return volume_id;
}