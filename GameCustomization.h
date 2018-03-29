#pragma once
#ifndef GAMECUSTOMIZATION_H
#define GAMECUSTOMIZATION_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

using namespace std;
using namespace sf;

class GameCustomization
{
private:
	Sprite background;
	IntRect rectP1;
	IntRect rectP2;
	Sprite P1;
	Sprite P2;
	Texture background_texture;
	Texture P_textures;
	Text P1Name;
	Text P2Name;
	Text P1_buttons[4];
	Text P2_buttons[4];
	Text Back_button;
	Font font;
	ConvexShape LeftArrow1;
	ConvexShape RightArrow1;
	ConvexShape LeftArrow2;
	ConvexShape RightArrow2;
	int SelectedIndex1;
	int SelectedIndex2;
	Keyboard::Key P1Key;
	Keyboard::Key P2Key;
	Keyboard::Key P1Key2;
	Keyboard::Key P2Key2;
	bool P1Ready;
	bool P2Ready;
	int P1TextureIndex;
	int P2TextureIndex;
	int TextureCount;

public:
	GameCustomization(float width, float heigth, RenderWindow &window);
	~GameCustomization();

	void draw(RenderWindow &window);
	void MoveUp(Keyboard::Key key);
	void MoveDown(Keyboard::Key key);
	void MoveRight(Keyboard::Key key);
	void MoveLeft(Keyboard::Key key);

	//getters:
	int GetSelectedIndex1();
	int GetSelectedIndex2();
	Keyboard::Key GetP1Key();
	Keyboard::Key GetP2Key();
	Keyboard::Key GetP1Key2() { return P1Key2; }
	Keyboard::Key GetP2Key2() { return P2Key2; }
	bool GetP1Ready();
	bool GetP2Ready();
	int GetP1TextureIndex();
	int GetP2TextureIndex();

	//setters:
	void SetP1Ready();
	void SetP2Ready();
	void P1ReadyChange();
	void P2ReadyChange();
	void SetP1Key(Keyboard::Key key);
	void SetP2Key(Keyboard::Key key);
	void SetP1Key2(Keyboard::Key key);
	void SetP2Key2(Keyboard::Key key);
	void P1KeyChange();
	void P2KeyChange();
	void P1KeyChange2();
	void P2KeyChange2();
	void P1PlayerChange(int pIndex);
	void P2PlayerChange(int pIndex);
	void waitButton(Keyboard::Key key);
	void waitButton2(Keyboard::Key key);
};

void load(RenderWindow &window, Font &font, Texture &background_texture, Texture &PTextures);
const char *getKeyName(const sf::Keyboard::Key key);

#endif