#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Menu.h"
#include "GameCustomization.h"
#include "loops.h"
#include <iostream>


using namespace std;
using namespace sf;

unsigned int res_x = 960;
unsigned int res_y = 540;

int main()
{
	RenderWindow window(sf::VideoMode(res_x, res_y), "Blow 'Em Up", Style::Resize || Style::Close);
	Menu main_menu(res_x, res_y, window, MainMenu);
	Menu options_menu(res_x, res_y, window, OptionsMenu);
	GameCustomization game_customization(res_x, res_y, window);

	menuloop(false, window, main_menu, options_menu, game_customization, 2);

	return 0;
}
