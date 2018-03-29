#pragma once
#ifndef LOOPS_H
#define LOOPS_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <Windows.h>
#include <stdio.h>
#include "Definitions.h"
#include "Menu.h"
#include "Player.h"
#include "Block.h"
#include "Collider.h"
#include "Explosion.h"
#include "Bomb.h"
#include "PowerUp.h"
#include "PlayerInfo.h"
#include "PopUp.h"
#include "C4.h"
#include "Grenade.h"

void menuloop(bool Fullscreen_tmp, RenderWindow &window, Menu &main_menu, Menu &options_menu, GameCustomization &game_customization, unsigned int volume);
void gameloop(bool Fullscreen_tmp, RenderWindow &window, Menu &main_menu, Menu &options_menu, GameCustomization &game_customization, unsigned int volume);

#endif