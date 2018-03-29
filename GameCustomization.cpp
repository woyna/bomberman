#include "GameCustomization.h"
#include <Windows.h>

void load(RenderWindow &window, Font &font, Texture &background_texture, Texture &PTextures)
{
	if (!font.loadFromFile("fonts/menu_font.ttf"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The font cannot be loaded. Make sure there is 'menu_font.ttf' file in 'fonts' directory and start the application again", "FONT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!background_texture.loadFromFile("textures/menu_background2.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The background cannot be loaded. Make sure there is 'menu_background.jpg' file in 'textures' directory and start the application again", "BACKGROUND NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!PTextures.loadFromFile("textures/playerTextures.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The player textures cannot be loaded. Make sure there is 'faceDefault.png' file in 'textures' directory and start the application again", "PLAYER TEXTURES NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}


GameCustomization::GameCustomization(float width, float heigth, RenderWindow &window)
{
	load(window, font, background_texture, P_textures);

	Vector2f position;

	background.setTexture(background_texture);
	background.setPosition(Vector2f(0, 0));

	P1Name.setFont(font);
	P1Name.setCharacterSize(80);
	P1Name.setOutlineThickness(5);
	P1Name.setOutlineColor(Color::Black);
	P1Name.setString("Player 1");
	P1Name.setPosition(Vector2f(290, 100));
	P2Name.setFont(font);
	P2Name.setCharacterSize(80);
	P2Name.setOutlineThickness(5);
	P2Name.setOutlineColor(Color::Black);
	P2Name.setString("Player 2");
	P2Name.setPosition(Vector2f(1220, 100));

	for (int i = 0; i < 4; i++)
	{
		P1_buttons[i].setFont(font);
		P1_buttons[i].setCharacterSize(80);
		P1_buttons[i].setOutlineThickness(5);
		P1_buttons[i].setOutlineColor(Color::Black);
	}

	position.x = 285.0f;
	position.y = 560.0f;

	P1_buttons[0].setString("Default");
	P1_buttons[0].setPosition(Vector2f(295, 490));
	P1_buttons[0].setFillColor(Color::Yellow);
	P1_buttons[1].setString("BOMB: Enter");
	P1_buttons[1].setPosition(Vector2f(295, 590));
	P1_buttons[2].setString("SPECIAL: RShift");
	P1_buttons[2].setPosition(Vector2f(295, 690));
	P1_buttons[3].setString("Ready");
	P1_buttons[3].setPosition(Vector2f(295, 790));

	for (int i = 0; i < 4; i++)
	{
		P2_buttons[i].setFont(font);
		P2_buttons[i].setCharacterSize(80);
		P2_buttons[i].setOutlineThickness(5);
		P2_buttons[i].setOutlineColor(Color::Black);
	}

	P2_buttons[0].setString("Default");
	P2_buttons[0].setPosition(Vector2f(1225, 490));
	P2_buttons[0].setFillColor(Color::Yellow);
	P2_buttons[1].setString("BOMB: G");
	P2_buttons[1].setPosition(Vector2f(1225, 590));
	P2_buttons[2].setString("SPECIAL: H");
	P2_buttons[2].setPosition(Vector2f(1225, 690));
	P2_buttons[3].setString("Ready");
	P2_buttons[3].setPosition(Vector2f(1225, 790));

	Back_button.setFont(font);
	Back_button.setCharacterSize(80);
	Back_button.setOutlineThickness(5);
	Back_button.setOutlineColor(Color::Black);
	Back_button.setString("Back");
	Back_button.setPosition(Vector2f(850, 880));

	LeftArrow1.setPointCount(3);
	LeftArrow1.setPoint(0, Vector2f(190, 300));
	LeftArrow1.setPoint(1, Vector2f(160, 330));
	LeftArrow1.setPoint(2, Vector2f(190, 360));
	LeftArrow1.setOutlineThickness(5);
	LeftArrow1.setOutlineColor(Color::Black);
	LeftArrow1.setFillColor(Color::Yellow);
	RightArrow1.setPointCount(3);
	RightArrow1.setPoint(0, Vector2f(590, 300));
	RightArrow1.setPoint(1, Vector2f(620, 330));
	RightArrow1.setPoint(2, Vector2f(590, 360));
	RightArrow1.setOutlineThickness(5);
	RightArrow1.setOutlineColor(Color::Black);
	RightArrow1.setFillColor(Color::Yellow);
	LeftArrow2.setPointCount(3);
	LeftArrow2.setPoint(0, Vector2f(1120, 300));
	LeftArrow2.setPoint(1, Vector2f(1090, 330));
	LeftArrow2.setPoint(2, Vector2f(1120, 360));
	LeftArrow2.setOutlineThickness(5);
	LeftArrow2.setOutlineColor(Color::Black);
	LeftArrow2.setFillColor(Color::Yellow);
	RightArrow2.setPointCount(3);
	RightArrow2.setPoint(0, Vector2f(1520, 300));
	RightArrow2.setPoint(1, Vector2f(1550, 330));
	RightArrow2.setPoint(2, Vector2f(1520, 360));
	RightArrow2.setOutlineThickness(5);
	RightArrow2.setOutlineColor(Color::Black);
	RightArrow2.setFillColor(Color::Yellow);

	TextureCount = P_textures.getSize().x / 250.0f;

	rectP1.height = rectP1.width = rectP2.height = rectP2.width = 250;
	rectP1.top = rectP1.left = rectP2.top = rectP2.left = 0;

	P1.setTexture(P_textures);
	P2.setTexture(P_textures);
	P1.setTextureRect(rectP1);
	P2.setTextureRect(rectP2);
	P1.setPosition(Vector2f(270, 209));
	P2.setPosition(Vector2f(1200, 209));

	SelectedIndex1 = 0;
	SelectedIndex2 = 0;

	P1TextureIndex = 0;
	P2TextureIndex = 0;

	P1Key = Keyboard::Return;
	P2Key = Keyboard::G;
	P1Key2 = Keyboard::RShift;
	P2Key2 = Keyboard::H;

	P1Ready = 0;
	P2Ready = 0;
}


GameCustomization::~GameCustomization()
{
}

void GameCustomization::draw(RenderWindow &window)
{
	window.draw(background);

	for (int i = 0; i < 4; i++)
	{
		window.draw(P1_buttons[i]);
		window.draw(P2_buttons[i]);
	}

	window.draw(Back_button);
	window.draw(LeftArrow1);
	window.draw(RightArrow1);
	window.draw(LeftArrow2);
	window.draw(RightArrow2);
	window.draw(P1);
	window.draw(P2);
	window.draw(P1Name);
	window.draw(P2Name);
}

void GameCustomization::MoveUp(Keyboard::Key key)
{
	switch (key)
	{
	case Keyboard::Up:
		if (SelectedIndex1 != 0 && SelectedIndex1 != 4)
		{
			P1_buttons[SelectedIndex1].setFillColor(Color::White);
			SelectedIndex1 -= 1;
			P1_buttons[SelectedIndex1].setFillColor(Color::Yellow);
			if (SelectedIndex1 == 0)
			{
				LeftArrow1.setFillColor(Color::Yellow);
				RightArrow1.setFillColor(Color::Yellow);
			}
		}
		else if (SelectedIndex1 == 4)
		{
			Back_button.setFillColor(Color::White);
			SelectedIndex1 -= 1;
			P1_buttons[SelectedIndex1].setFillColor(Color::Yellow);
		}
		break;

	case Keyboard::W:
		if (SelectedIndex2 != 0 && SelectedIndex2 != 4)
		{
			P2_buttons[SelectedIndex2].setFillColor(Color::White);
			SelectedIndex2 -= 1;
			P2_buttons[SelectedIndex2].setFillColor(Color::Yellow);
			if (SelectedIndex2 == 0)
			{
				LeftArrow2.setFillColor(Color::Yellow);
				RightArrow2.setFillColor(Color::Yellow);
			}
		}
		else if (SelectedIndex2 == 4)
		{
			Back_button.setFillColor(Color::White);
			SelectedIndex2 -= 1;
			P2_buttons[SelectedIndex2].setFillColor(Color::Yellow);
		}
			break;

	}
}

void GameCustomization::MoveDown(Keyboard::Key key)
{
	switch (key)
	{
	case Keyboard::Down:
		if (SelectedIndex1 != 4 && SelectedIndex1 != 3)
		{
			if (SelectedIndex1 == 0)
			{
				LeftArrow1.setFillColor(Color::White);
				RightArrow1.setFillColor(Color::White);
			}
			P1_buttons[SelectedIndex1].setFillColor(Color::White);
			SelectedIndex1 += 1;
			P1_buttons[SelectedIndex1].setFillColor(Color::Yellow);
		}
		else if (SelectedIndex1 == 3 && SelectedIndex2 != 4)
		{
			P1_buttons[SelectedIndex1].setFillColor(Color::White);
			SelectedIndex1 += 1;
			Back_button.setFillColor(Color::Yellow);
		}
		break;

	case Keyboard::S:
		if (SelectedIndex2 != 4 && SelectedIndex2 != 3)
		{
			if (SelectedIndex2 == 0)
			{
				LeftArrow2.setFillColor(Color::White);
				RightArrow2.setFillColor(Color::White);
			}
			P2_buttons[SelectedIndex2].setFillColor(Color::White);
			SelectedIndex2 += 1;
			P2_buttons[SelectedIndex2].setFillColor(Color::Yellow);
		}
		else if (SelectedIndex2 == 3 && SelectedIndex1!=4)
		{
			P2_buttons[SelectedIndex2].setFillColor(Color::White);
			SelectedIndex2 += 1;
			Back_button.setFillColor(Color::Yellow);
		}
		break;

	}
}

void GameCustomization::MoveRight(Keyboard::Key key)
{
	switch (key)
	{
	case Keyboard::Right:
		if (P1TextureIndex != (TextureCount - 1))
		{
			P1TextureIndex++;
			rectP1.left += 250;
			P1.setTextureRect(rectP1);
			P1PlayerChange(P1TextureIndex);
		}
		else if (P1TextureIndex == (TextureCount - 1))
		{
			P1TextureIndex = 0;
			rectP1.left = 0;
			P1.setTextureRect(rectP1);
			P1PlayerChange(P1TextureIndex);
		}
		break;

	case Keyboard::D:
		if (P2TextureIndex != (TextureCount - 1))
		{
			P2TextureIndex++;
			rectP2.left += 250;
			P2.setTextureRect(rectP2);
			P2PlayerChange(P2TextureIndex);
		}
		else if (P2TextureIndex == (TextureCount - 1))
		{
			P2TextureIndex = 0;
			rectP2.left = 0;
			P2.setTextureRect(rectP2);
			P2PlayerChange(P2TextureIndex);
		}
		break;
	}
}

void GameCustomization::MoveLeft(Keyboard::Key key)
{
	switch (key)
	{
	case Keyboard::Left:
		if (P1TextureIndex != 0)
		{
			P1TextureIndex--;
			rectP1.left -= 250;
			P1.setTextureRect(rectP1);
			P1PlayerChange(P1TextureIndex);
		}
		else if (P1TextureIndex == 0)
		{
			P1TextureIndex = (TextureCount - 1);
			rectP1.left = (TextureCount - 1) * 250.0f;
			P1.setTextureRect(rectP1);
			P1PlayerChange(P1TextureIndex);
		}
		break;

	case Keyboard::A:
		if (P2TextureIndex != 0)
		{
			P2TextureIndex--;
			rectP2.left -= 250;
			P2.setTextureRect(rectP2);
			P2PlayerChange(P2TextureIndex);
		}
		else if (P2TextureIndex == 0)
		{
			P2TextureIndex = (TextureCount - 1);
			rectP2.left = (TextureCount - 1) * 250.0f;
			P2.setTextureRect(rectP2);
			P2PlayerChange(P2TextureIndex);
		}
		break;
	}
}

int GameCustomization::GetSelectedIndex1()
{
	return SelectedIndex1;
}

int GameCustomization::GetSelectedIndex2()
{
	return SelectedIndex2;
}

void GameCustomization::SetP1Key(Keyboard::Key key)
{
	if (key != Keyboard::Up && key != Keyboard::Down && key != Keyboard::G && key != Keyboard::Right && key != Keyboard::Left
		&& key != Keyboard::W && key != Keyboard::A && key != Keyboard::S && key != Keyboard::D && key!=P2Key && key != P2Key2 && key != P1Key2) P1Key = key;
}

void GameCustomization::SetP2Key(Keyboard::Key key)
{
	if(key!=Keyboard::Up && key != Keyboard::Down && key != Keyboard::Return && key != Keyboard::Right && key != Keyboard::Left
		&& key != Keyboard::W && key != Keyboard::A && key != Keyboard::S && key != Keyboard::D && key != P1Key && key != P2Key2 && key != P1Key2) P2Key = key;
}

void GameCustomization::SetP1Key2(Keyboard::Key key)
{
	if (key != Keyboard::Up && key != Keyboard::Down && key != Keyboard::G && key != Keyboard::Right && key != Keyboard::Left
		&& key != Keyboard::W && key != Keyboard::A && key != Keyboard::S && key != Keyboard::D && key != P2Key && key != P2Key2 && key != P1Key) P1Key2 = key;
}

void GameCustomization::SetP2Key2(Keyboard::Key key)
{
	if (key != Keyboard::Up && key != Keyboard::Down && key != Keyboard::Return && key != Keyboard::Right && key != Keyboard::Left
		&& key != Keyboard::W && key != Keyboard::A && key != Keyboard::S && key != Keyboard::D && key != P2Key && key != P1Key && key != P1Key2) P2Key2 = key;
}

const char *getKeyName(const sf::Keyboard::Key key) {
	switch (key) {
	default:
	case sf::Keyboard::Unknown:
		return "Unknown";
	case sf::Keyboard::A:
		return "A";
	case sf::Keyboard::B:
		return "B";
	case sf::Keyboard::C:
		return "C";
	case sf::Keyboard::D:
		return "D";
	case sf::Keyboard::E:
		return "E";
	case sf::Keyboard::F:
		return "F";
	case sf::Keyboard::G:
		return "G";
	case sf::Keyboard::H:
		return "H";
	case sf::Keyboard::I:
		return "I";
	case sf::Keyboard::J:
		return "J";
	case sf::Keyboard::K:
		return "K";
	case sf::Keyboard::L:
		return "L";
	case sf::Keyboard::M:
		return "M";
	case sf::Keyboard::N:
		return "N";
	case sf::Keyboard::O:
		return "O";
	case sf::Keyboard::P:
		return "P";
	case sf::Keyboard::Q:
		return "Q";
	case sf::Keyboard::R:
		return "R";
	case sf::Keyboard::S:
		return "S";
	case sf::Keyboard::T:
		return "T";
	case sf::Keyboard::U:
		return "U";
	case sf::Keyboard::V:
		return "V";
	case sf::Keyboard::W:
		return "W";
	case sf::Keyboard::X:
		return "X";
	case sf::Keyboard::Y:
		return "Y";
	case sf::Keyboard::Z:
		return "Z";
	case sf::Keyboard::Num0:
		return "Num0";
	case sf::Keyboard::Num1:
		return "Num1";
	case sf::Keyboard::Num2:
		return "Num2";
	case sf::Keyboard::Num3:
		return "Num3";
	case sf::Keyboard::Num4:
		return "Num4";
	case sf::Keyboard::Num5:
		return "Num5";
	case sf::Keyboard::Num6:
		return "Num6";
	case sf::Keyboard::Num7:
		return "Num7";
	case sf::Keyboard::Num8:
		return "Num8";
	case sf::Keyboard::Num9:
		return "Num9";
	case sf::Keyboard::Escape:
		return "Escape";
	case sf::Keyboard::LControl:
		return "LControl";
	case sf::Keyboard::LShift:
		return "LShift";
	case sf::Keyboard::LAlt:
		return "LAlt";
	case sf::Keyboard::LSystem:
		return "LSystem";
	case sf::Keyboard::RControl:
		return "RControl";
	case sf::Keyboard::RShift:
		return "RShift";
	case sf::Keyboard::RAlt:
		return "RAlt";
	case sf::Keyboard::RSystem:
		return "RSystem";
	case sf::Keyboard::Menu:
		return "Menu";
	case sf::Keyboard::LBracket:
		return "{";
	case sf::Keyboard::RBracket:
		return "}";
	case sf::Keyboard::SemiColon:
		return ";";
	case sf::Keyboard::Comma:
		return ",";
	case sf::Keyboard::Period:
		return ".";
	case sf::Keyboard::Quote:
		return "'";
	case sf::Keyboard::Slash:
		return "/";
	case sf::Keyboard::BackSlash:
		return "\\";
	case sf::Keyboard::Tilde:
		return "~";
	case sf::Keyboard::Equal:
		return "=";
	case sf::Keyboard::Dash:
		return "-";
	case sf::Keyboard::Space:
		return "Space";
	case sf::Keyboard::Return:
		return "Enter";
	case sf::Keyboard::BackSpace:
		return "BackSpace";
	case sf::Keyboard::Tab:
		return "Tab";
	case sf::Keyboard::PageUp:
		return "PageUp";
	case sf::Keyboard::PageDown:
		return "PageDown";
	case sf::Keyboard::End:
		return "End";
	case sf::Keyboard::Home:
		return "Home";
	case sf::Keyboard::Insert:
		return "Insert";
	case sf::Keyboard::Delete:
		return "Delete";
	case sf::Keyboard::Add:
		return "+";
	case sf::Keyboard::Subtract:
		return "-";
	case sf::Keyboard::Multiply:
		return "*";
	case sf::Keyboard::Divide:
		return "Unknown";
	case sf::Keyboard::Left:
		return "Left";
	case sf::Keyboard::Right:
		return "Right";
	case sf::Keyboard::Up:
		return "Up";
	case sf::Keyboard::Down:
		return "Down";
	case sf::Keyboard::Numpad0:
		return "Numpad0";
	case sf::Keyboard::Numpad1:
		return "Numpad1";
	case sf::Keyboard::Numpad2:
		return "Numpad2";
	case sf::Keyboard::Numpad3:
		return "Numpad3";
	case sf::Keyboard::Numpad4:
		return "Numpad4";
	case sf::Keyboard::Numpad5:
		return "Numpad5";
	case sf::Keyboard::Numpad6:
		return "Numpad6";
	case sf::Keyboard::Numpad7:
		return "Numpad7";
	case sf::Keyboard::Numpad8:
		return "Numpad8";
	case sf::Keyboard::Numpad9:
		return "Numpad9";
	case sf::Keyboard::F1:
		return "F1";
	case sf::Keyboard::F2:
		return "F2";
	case sf::Keyboard::F3:
		return "F3";
	case sf::Keyboard::F4:
		return "F4";
	case sf::Keyboard::F5:
		return "F5";
	case sf::Keyboard::F6:
		return "F6";
	case sf::Keyboard::F7:
		return "F7";
	case sf::Keyboard::F8:
		return "F8";
	case sf::Keyboard::F9:
		return "F9";
	case sf::Keyboard::F10:
		return "F10";
	case sf::Keyboard::F11:
		return "F11";
	case sf::Keyboard::F12:
		return "F12";
	case sf::Keyboard::F13:
		return "F13";
	case sf::Keyboard::F14:
		return "F14";
	case sf::Keyboard::F15:
		return "F15";
	case sf::Keyboard::Pause:
		return "Pause";
	}
}

void GameCustomization::P1KeyChange()
{
	string string_tmp = getKeyName(P1Key);
	string string_tmp2 = "BOMB: " + string_tmp;
	P1_buttons[1].setString(string_tmp2);
}

void GameCustomization::P2KeyChange()
{
	string string_tmp = getKeyName(P2Key);
	string string_tmp2 = "BOMB: " + string_tmp;
	P2_buttons[1].setString(string_tmp2);
}

void GameCustomization::P1KeyChange2()
{
	string string_tmp = getKeyName(P1Key2);
	string string_tmp2 = "SPECIAL: " + string_tmp;
	P1_buttons[2].setString(string_tmp2);
}

void GameCustomization::P2KeyChange2()
{
	string string_tmp = getKeyName(P2Key2);
	string string_tmp2 = "SPECIAL: " + string_tmp;
	P2_buttons[2].setString(string_tmp2);
}

void GameCustomization::P1PlayerChange(int pIndex)
{
		switch (pIndex)
		{
		case 0:
			P1_buttons[0].setString("Default");
			break;
		case 1:
			P1_buttons[0].setString("Blue");
			break;
		case 2:
			P1_buttons[0].setString("Yellow");
			break;
		case 3:
			P1_buttons[0].setString("Pink");
			break;
		case 4:
			P1_buttons[0].setString("Sabiba");
			break;
		}
}

void GameCustomization::P2PlayerChange(int pIndex)
{
	switch (pIndex)
	{
	case 0:
		P2_buttons[0].setString("Default");
		break;
	case 1:
		P2_buttons[0].setString("Blue");
		break;
	case 2:
		P2_buttons[0].setString("Yellow");
		break;
	case 3:
		P2_buttons[0].setString("Pink");
		break;
	case 4:
		P2_buttons[0].setString("Sabiba");
		break;
	}
}

void GameCustomization::waitButton(Keyboard::Key key)
{
	if (key == Keyboard::Return)
	{
		P1_buttons[1].setString("BOMB:");
	}
	else if (key == Keyboard::G)
	{
		P2_buttons[1].setString("BOMB:");
	}
}

void GameCustomization::waitButton2(Keyboard::Key key)
{
	if (key == Keyboard::Return)
	{
		P1_buttons[2].setString("SPECIAL:");
	}
	else if (key == Keyboard::G)
	{
		P2_buttons[2].setString("SPECIAL:");
	}
}

bool GameCustomization::GetP1Ready()
{
	return P1Ready;
}

bool GameCustomization::GetP2Ready()
{
	return P2Ready;
}

int GameCustomization::GetP1TextureIndex()
{
	return P1TextureIndex;
}

int GameCustomization::GetP2TextureIndex()
{
	return P2TextureIndex;
}

Keyboard::Key GameCustomization::GetP1Key()
{
	return P1Key;
}

Keyboard::Key GameCustomization::GetP2Key()
{
	return P2Key;
}

void GameCustomization::SetP1Ready()
{
	if (P1Ready == 0)
	{
		P1Ready = 1;
	}
	else if (P1Ready == 1)
	{
		P1Ready = 0;
	}
}

void GameCustomization::SetP2Ready()
{
	if (P2Ready == 0)
	{
		P2Ready = 1;
	}
	else if (P2Ready == 1)
	{
		P2Ready = 0;
	}
}

void GameCustomization::P1ReadyChange()
{
	if (P1Ready == 0)
	{
		P1_buttons[3].setString("READY");
	}
	else if (P1Ready == 1)
	{
		P1_buttons[3].setString("READY!");
	}
}

void GameCustomization::P2ReadyChange()
{
	if (P2Ready == 0)
	{
		P2_buttons[3].setString("READY");
	}
	else if (P2Ready == 1)
	{
		P2_buttons[3].setString("READY!");
	}
}