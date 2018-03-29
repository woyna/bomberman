#include "loops.h"

void loadPlayerTexture(Texture &pTexture, int textureIndex, Texture &dead_texture, RenderWindow &window)
{
	switch (textureIndex)
	{
	case 0:
		if (!pTexture.loadFromFile("textures/spritesheetDefault.png"))
		{
			int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'spritesheetDefault.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
			if (MsgBoxID == 1)
			{
				window.close();
			}
		}
		break;
	case 1:
		if (!pTexture.loadFromFile("textures/spritesheetBlue.png"))
		{
			int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'spritesheetBlue.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
			if (MsgBoxID == 1)
			{
				window.close();
			}
		}
		break;
	case 2:
		if (!pTexture.loadFromFile("textures/spritesheetYellow.png"))
		{
			int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'spritesheetYellow.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
			if (MsgBoxID == 1)
			{
				window.close();
			}
		}
		break;
	case 3:
		if (!pTexture.loadFromFile("textures/spritesheetPink.png"))
		{
			int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'spritesheetPink.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
			if (MsgBoxID == 1)
			{
				window.close();
			}
		}
		break;
	case 4:
		if (!pTexture.loadFromFile("textures/spritesheetSabiba.png"))
		{
			int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'spritesheetSabiba.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
			if (MsgBoxID == 1)
			{
				window.close();
			}
		}
		break;
	}

	if (!dead_texture.loadFromFile("textures/skeleton.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The dead texture cannot be loaded. Make sure there is 'skeleton.png' file in 'textures' directory and start the application again", "DEAD TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

void loadPlayerFace(Texture& pTexture, RenderWindow &window)
{
	if (!pTexture.loadFromFile("textures/playerTextures.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The player texture cannot be loaded. Make sure there is 'playerTexture.png' file in 'textures' directory and start the application again", "PLAYER TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

void loadTextures(RenderWindow &window, Texture &background_texture, Texture &ground_texture, Texture &bomb_texture, Texture &stats_texture, Texture &special_texture, Texture &popup_texture,
	Texture &c4_texture, Texture &grenade_texture)
{
	if (!background_texture.loadFromFile("textures/background.jpg"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The background texture cannot be loaded. Make sure there is 'background.jpg' file in 'textures' directory and start the application again", "BACKGROUND TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!ground_texture.loadFromFile("textures/ground.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The background texture cannot be loaded. Make sure there is 'ground.png' file in 'textures' directory and start the application again", "BACKGROUND TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if(!bomb_texture.loadFromFile("textures/bomb.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The bomb texture cannot be loaded. Make sure there is 'bomb.png' file in 'textures' directory and start the application again", "BOMB TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!stats_texture.loadFromFile("textures/statsIcons.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "Stats texture cannot be loaded. Make sure there is 'statsIcons.png' file in 'textures' directory and start the application again", "STATS TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!special_texture.loadFromFile("textures/specialWeapons.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "Special weapons texture cannot be loaded. Make sure there is 'specialWeapons.png' file in 'textures' directory and start the application again", "SPECIAL WEAPONS TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!popup_texture.loadFromFile("textures/popup.jpg"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The popup texture cannot be loaded. Make sure there is 'popup.jpg' file in 'textures' directory and start the application again", "POPUP TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!c4_texture.loadFromFile("textures/c4.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The C4 texture cannot be loaded. Make sure there is 'c4.png' file in 'textures' directory and start the application again", "C4 TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!grenade_texture.loadFromFile("textures/grenade.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The grenade texture cannot be loaded. Make sure there is 'grenade.png' file in 'textures' directory and start the application again", "GRENADE TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

void loadBlockTextures(RenderWindow &window, Texture &crate_texture, Texture &wall_texture, Texture &explosion_texture, Texture &powerup_texture)
{
	if (!crate_texture.loadFromFile("textures/crate.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The crate texture cannot be loaded. Make sure there is 'crate.png' file in 'textures' directory and start the application again", "CRATE TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!wall_texture.loadFromFile("textures/wall.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The wall texture cannot be loaded. Make sure there is 'wall.png' file in 'textures' directory and start the application again", "WALL TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!explosion_texture.loadFromFile("textures/explosion.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The explosion texture cannot be loaded. Make sure there is 'explosion.png' file in 'textures' directory and start the application again", "EXPLOSION TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!powerup_texture.loadFromFile("textures/powerups.png"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The powerups texture cannot be loaded. Make sure there is 'powerups.png' file in 'textures' directory and start the application again", "POWERUP TEXTURE NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

void loadSounds(RenderWindow &window, SoundBuffer *ignition_sound, SoundBuffer *explosion_sound, SoundBuffer* scream_sound, SoundBuffer* plant_sound, SoundBuffer* throwing_sound)
{
	if (!ignition_sound->loadFromFile("sounds/ignition.wav"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The sound effect cannot be loaded. Make sure there is 'ignition.wav' file in 'sounds' directory and start the application again", "SOUND EFFECT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!explosion_sound->loadFromFile("sounds/explosion.wav"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The sound effect cannot be loaded. Make sure there is 'explosion.wav' file in 'sounds' directory and start the application again", "SOUND EFFECT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}


	if (!scream_sound->loadFromFile("sounds/scream.wav"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The sound effect cannot be loaded. Make sure there is 'scream.wav' file in 'sounds' directory and start the application again", "SOUND EFFECT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}


	if (!plant_sound->loadFromFile("sounds/c4plant.wav"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The sound effect cannot be loaded. Make sure there is 'c4plant.wav' file in 'sounds' directory and start the application again", "SOUND EFFECT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	if (!throwing_sound->loadFromFile("sounds/throw.wav"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The sound effect cannot be loaded. Make sure there is 'throw.wav' file in 'sounds' directory and start the application again", "SOUND EFFECT NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}
}

PowerUp* getPowerUp(Vector2f position, unsigned int volumeLevel)
{
	int random = rand() % 12;
	switch (random)
	{
	case 0: 
		return new AddRange(position, volumeLevel); break;
	case 1:
		return new AddRange(position, volumeLevel); break;
	case 2:
		return new AddRange(position, volumeLevel); break;
	case 3: 
		return new AddRange(position, volumeLevel); break;
	case 4:
		return new SpeedUp(position, volumeLevel); break;
	case 5:
		return new SpeedUp(position, volumeLevel); break;
	case 6:
		return new SpeedUp(position, volumeLevel); break;
	case 7:
		return new AddBomb(position, volumeLevel); break;
	case 8:
		return new AddBomb(position, volumeLevel); break;
	case 9:
		return new AddBomb(position, volumeLevel); break;
	case 10:
		return new AddRange(position, volumeLevel); break;
	case 11:
		return new AddRange(position, volumeLevel); break;
	}
}

PowerUp* getSpecialWeapons(Vector2f position, unsigned int volumeLevel)
{
	int random = rand() % 2;
	switch (random)
	{
	case 0:
		return new AddC4(position, volumeLevel); break;
	case 1:
		return new AddGrenade(position, volumeLevel); break;
	}
}

void generateCrates(RenderWindow &window, Block* crate[], Texture &crateTexture, PowerUp* powerup[], Texture &powerupTexture, unsigned int volumeLevel)
{
	unsigned int cratesQty1_t = (cratesQty - 16) / 5;
	unsigned int cratesQty2_t = 4;
	srand(time(NULL));
	int tab[cratesQty];
	Vector2f size(90, 90);
	Vector2f position;
	bool permission = 0;
	bool permission2 = 0;

	crate[0] = new Block(crateTexture, size, Vector2f(670.0f, 190.0f), 1);

	for (int i = 1; i < cratesQty1_t; i++)
	{
		do {
			position.x = 760.0f + 90.0f * (rand() % 12);
			position.y = 190.0f;
			for (int j = 1; (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
			permission2 = 0;
	}

	crate[cratesQty1_t] = new Block(crateTexture, size, Vector2f(490.0f, 370.0f), 1);

	for (int i = (1*cratesQty1_t + 1); i < (2*cratesQty1_t); i++)
	{
		do {
			position.x = 580.0f + 90.0f * (rand() % 14);
			position.y = 370.0f;
			for (int j = (1*cratesQty1_t + 1); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	for (int i = (2*cratesQty1_t); i < (3 * cratesQty1_t); i++)
	{
		do {
			position.x = 490.0f + 90.0f * (rand() % 15);
			position.y = 550.0f;
			for (int j = (2 * cratesQty1_t); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	crate[3* cratesQty1_t] = new Block(crateTexture, size, Vector2f(1750.0f, 730.0f), 1);

	for (int i = (3 * cratesQty1_t + 1); i < (4 * cratesQty1_t); i++)
	{
		do {
			position.x = 490.0f + 90.0f * (rand() % 14);
			position.y = 730.0f;
			for (int j = (3 * cratesQty1_t + 1); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	crate[4 * cratesQty1_t] = new Block(crateTexture, size, Vector2f(1570.0f, 910.0f), 1);

	for (int i = (4 * cratesQty1_t + 1); i < (5 * cratesQty1_t); i++)
	{
		do {
			position.x = 490.0f + 90.0f * (rand() % 12);
			position.y = 910.0f;
			for (int j = (4 * cratesQty1_t + 1); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	for (int i = (5 * cratesQty1_t); i < ((5 * cratesQty1_t) + 4); i++)
	{
		do {
			position.x = 670.0f + 180.0f * (rand() % 7);
			position.y = 280.0f;
			for (int j = (5 * cratesQty1_t); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	for (int i = (5 * cratesQty1_t + 4); i < ((5 * cratesQty1_t) + 8); i++)
	{
		do {
			position.x = 490.0f + 180.0f * (rand() % 8);
			position.y = 460.0f;
			for (int j = (5 * cratesQty1_t + 4); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	for (int i = (5 * cratesQty1_t + 8); i < ((5 * cratesQty1_t) + 12); i++)
	{
		do {
			position.x = 490.0f + 180.0f * (rand() % 8);
			position.y = 640.0f;
			for (int j = (5 * cratesQty1_t + 8); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	for (int i = (5 * cratesQty1_t + 12); i < ((5 * cratesQty1_t) + 16); i++)
	{
		do {
			position.x = 490.0f + 180.0f * (rand() % 7);
			position.y = 820.0f;
			for (int j = (5 * cratesQty1_t + 12); (j - 1) < i; j++)
			{
				if (position.x == tab[j])
				{
					permission = 0; break;
				}
				else permission = 1;
			}
			if (permission)
			{
				crate[i] = new Block(crateTexture, size, position, 1);
				tab[i] = position.x;
				permission2 = 1;
			}
		} while (!permission2);
		permission2 = 0;
	}

	///////////// ^generating crates

	int random;
	bool permission3;
	bool permission4;
	int random_tab[numPowerups + numSpecials];

	for (int i = 0; i < (numPowerups + numSpecials); i++)
	{
		random_tab[i] = -1;
	}

	for (int i = 0; i < numPowerups; i++)
	{
		permission4 = false;
		do
		{
			permission3 = true;
			random = rand() % 71;
			for (int j = 0; j < numPowerups; j++)
			{
				if (random == random_tab[j]) permission3 = false;
			}

			if (permission3)
			{
				powerup[i] = getPowerUp(crate[random]->getPosition(), volumeLevel);
				random_tab[i] = random;
				permission4 = true;
			}
		} while (!permission4);
	}

	for (int i = numPowerups; i < (numPowerups + numSpecials); i++)
	{
		permission4 = false;
		do
		{
			permission3 = true;
			random = rand() % 71;
			for (int j = 0; j < (numPowerups + numSpecials); j++)
			{
				if (random == random_tab[j]) permission3 = false;
			}

			if (permission3)
			{
				powerup[i] = getSpecialWeapons(crate[random]->getPosition(), volumeLevel);
				random_tab[i] = random;
				permission4 = true;
			}
		} while (!permission4);
	}

	//////////// ^generating powerups
}

void loadMap(RenderWindow &window, Explosion* explosion[][numColumns], Block* crate[], Block* wall[], Texture &crateTexture, Texture &wallTexture, Texture &explosionTexture, SoundBuffer* explosionSound,
	PowerUp* powerup[], Texture &powerupTexture, unsigned int volumeLevel)
{
	loadBlockTextures(window, crateTexture, wallTexture, explosionTexture, powerupTexture);

	Vector2f position;
	Vector2f size(90, 90);
	Vector2f size2(90, 90);

	for (int i = 0; i < numRows; i = i + 2)
	{
		position.y = 190 + (i * 90);
		for (int j = 0; j < numColumns; j++)
		{
			position.x = 490 + (j * 90);
			explosion[i][j] = new Explosion(explosionTexture, explosionSound, position, volumeLevel);
		}
	}

	for (int i = 1; i < numRows; i = i + 2)
	{
		position.y = 190 + (i * 90);
		for (int j = 0; j < numColumns; j = j + 2)
		{
			position.x = 490 + (j * 90);
			explosion[i][j] = new Explosion(explosionTexture, explosionSound, position, volumeLevel);
		}
	}

	for (int i = 1; i < numRows; i = i + 2)
	{
		position.y = 190 + (i * 90);
		for (int j = 1; j < numColumns; j = j + 2)
		{
			position.x = 490 + (j * 90);
			explosion[i][j] = new Explosion(explosionTexture, explosionSound, position, volumeLevel);
		}
	}

	///////////////////////////////////////// ^explosion

	generateCrates(window, crate, crateTexture, powerup, powerupTexture, volumeLevel);

	//////////////////////////////////////// ^crates

	for (int i = 0; i < 7; i++)
	{
		position.x = 580 + i * 180;
		position.y = 280;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 7; i < 14; i++)
	{
		position.x = 580 + ((i - 7) * 180);
		position.y = 460;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 14; i < 21; i++)
	{
		position.x = 580 + ((i - 14) * 180);
		position.y = 640;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 21; i < 28; i++)
	{
		position.x = 580 + ((i - 21) * 180);
		position.y = 820;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	/////////////////////////// ^middle blocks

	for (int i = 28; i < 48; i++)
	{
		position.x = 400;
		position.y = 100 + ((i-28) * 45);
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 48; i < 63; i++)
	{
		position.x = 490 + ((i - 48) * 90);
		position.y = 100;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 63; i < 83; i++)
	{
		position.x = 1840;
		position.y = 100 + ((i - 63) * 45);
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	for (int i = 83; i < 100; i++)
	{
		position.x = 400 + ((i - 83) * 90);
		position.y = 1000;
		wall[i] = new Block(wallTexture, size, position, 0);
	}

	////////////////////////// ^border walls

}

void checkWinner(float deltaTime, float* totalTime, bool p1Dead, bool p2Dead, bool* isGameEnded, Text &result)
{
	*totalTime += deltaTime;

	if (*totalTime >= 3.5f)
	{
		if (!p1Dead && p2Dead)
		{
			result.setString("Player 1 won!");
			*totalTime = 0.0f;
			*isGameEnded = true;
		}

		else if (p1Dead && !p2Dead)
		{
			result.setString("Player 2 won!");
			*totalTime = 0.0f;
			*isGameEnded = true;
		}

		else if (p1Dead && p2Dead)
		{
			result.setString("DRAW");
			*totalTime = 0.0f;
			*isGameEnded = true;
		}
	}
}

void shrinkMap(float deltaTime, float* totalTime, Block* wall[], int* iterator, Player &p1, Player &p2)
{
	*totalTime += deltaTime;
	Vector2f position;
	float shrinkTime = 120.0f;
	if ((*totalTime) >= (shrinkTime + (0.3f * (*iterator))) && (*iterator) < 15)
	{
			position.x = 490 + (*iterator * 90);
			position.y = 190;
			wall[*iterator]->setPosition(position);
			if (wall[*iterator]->getCollider().checkCollision2(p1.getCollider())) p1.die();
			if (wall[*iterator]->getCollider().checkCollision2(p2.getCollider())) p2.die();
			(*iterator)++;
	}
	if ((*totalTime) >= (shrinkTime + (0.3f * (*iterator))) && *iterator > 14 && *iterator < 22)
	{
		position.x = 1750;
		position.y = 280 + (*iterator - 15) * 90;
		wall[*iterator]->setPosition(position);
		if (wall[*iterator]->getCollider().checkCollision2(p1.getCollider())) p1.die();
		if (wall[*iterator]->getCollider().checkCollision2(p2.getCollider())) p2.die();
		(*iterator)++;
	}
	if ((*totalTime) >= (shrinkTime + (0.3f * (*iterator))) && *iterator > 21 && *iterator < 36)
	{
		position.x = 1750 - (*iterator - 22) * 90;
		position.y = 910;
		wall[*iterator]->setPosition(position);
		if (wall[*iterator]->getCollider().checkCollision2(p1.getCollider())) p1.die();
		if (wall[*iterator]->getCollider().checkCollision2(p2.getCollider())) p2.die();
		(*iterator)++;
	}
	if ((*totalTime) >= (shrinkTime + (0.3f * (*iterator))) && *iterator > 35 && *iterator < 44)
	{
		position.x = 490;
		position.y = 910 - (*iterator - 36) * 90;
		wall[*iterator]->setPosition(position);
		if (wall[*iterator]->getCollider().checkCollision2(p1.getCollider())) p1.die();
		if (wall[*iterator]->getCollider().checkCollision2(p2.getCollider())) p2.die();
		(*iterator)++;
	}
}

void endGame(float deltaTime, float* totalTime, int* loop_id)
{
	*totalTime += deltaTime;

	if (*totalTime >= 3.8f)
	{
		*loop_id = 1;
	}
}

void menuloop(bool Fullscreen_tmp, RenderWindow &window, Menu &main_menu, Menu &options_menu, GameCustomization &game_customization, unsigned int volumeLevel)
{
	int loop_id = 1;
	bool Fullscreen = Fullscreen_tmp;
	int MenuTypeIndex = 1;
	View view(FloatRect(0, 0, 1920, 1080));
	window.setView(view);
	window.setMouseCursorVisible(false);

	bool wait = false;
	bool wait2 = false;
	bool wait3 = false;
	bool wait4 = false;
	bool wait5 = false;
	bool wait6 = false;
	bool wait7 = false;
	bool wait8 = false;

	Music menu_soundtrack;

	if (!menu_soundtrack.openFromFile("sounds/menu_soundtrack.ogg"))
	{
		int MsgBoxID = MessageBoxA(NULL, "The soundtrack cannot be loaded. Make sure there is 'menu_soundtrack.ogg' file in 'sounds' directory and start the application again", "SOUNDTRACK NOT FOUND", MB_ICONERROR | MB_OK);
		if (MsgBoxID == 1)
		{
			window.close();
		}
	}

	menu_soundtrack.play();
	menu_soundtrack.setLoop(true);
	switch (volumeLevel)
	{
	case 0:
		menu_soundtrack.setVolume(0); break;
	case 1:
		menu_soundtrack.setVolume(5); break;
	case 2:
		menu_soundtrack.setVolume(25); break;
	case 3:
		menu_soundtrack.setVolume(50); break;
	case 4:
		menu_soundtrack.setVolume(100); break;
	}

	while (window.isOpen())
	{
		Event event, event2;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;

			case Event::MouseButtonPressed:
				cout << Mouse::getPosition().x << "x" << Mouse::getPosition().y << endl;
				break;

			case Event::KeyReleased:
				switch (event.key.code)
				{
					//selecting different menu buttons
				case Keyboard::W:
					if (MenuTypeIndex == 1)
					{
						main_menu.MoveUp();
					}
					else if (MenuTypeIndex == 2)
					{
						options_menu.MoveUp();
					}
					else if (MenuTypeIndex == 3)
					{
						if (!game_customization.GetP2Ready())
							game_customization.MoveUp(Keyboard::W);
					}
					break;
				case Keyboard::Up:
					if (MenuTypeIndex == 1)
					{
						main_menu.MoveUp();
					}
					else if (MenuTypeIndex == 2)
					{
						options_menu.MoveUp();
					}
					else if (MenuTypeIndex == 3)
					{
						if (!game_customization.GetP1Ready())
							game_customization.MoveUp(Keyboard::Up);
					}
					break;

				case Keyboard::S:
					if (MenuTypeIndex == 1)
					{
						main_menu.MoveDown();
					}
					else if (MenuTypeIndex == 2)
					{
						options_menu.MoveDown();
					}
					else if (MenuTypeIndex == 3)
					{
						if (!game_customization.GetP2Ready())
							game_customization.MoveDown(Keyboard::S);
					}
					break;

				case Keyboard::Down:
					if (MenuTypeIndex == 1)
					{
						main_menu.MoveDown();
					}
					else if (MenuTypeIndex == 2)
					{
						options_menu.MoveDown();
					}
					else if (MenuTypeIndex == 3)
					{
						if (!game_customization.GetP1Ready())
							game_customization.MoveDown(Keyboard::Down);
					}
					break;

				case Keyboard::Left:
					if (MenuTypeIndex == 3 && game_customization.GetSelectedIndex1() == 0)
					{
						game_customization.MoveLeft(Keyboard::Left);
					}
					break;

				case Keyboard::Right:
					if (MenuTypeIndex == 3 && game_customization.GetSelectedIndex1() == 0)
					{
						game_customization.MoveRight(Keyboard::Right);
					}
					break;

				case Keyboard::A:
					if (MenuTypeIndex == 3 && game_customization.GetSelectedIndex2() == 0)
					{
						game_customization.MoveLeft(Keyboard::A);
					}
					break;
				case Keyboard::D:
					if (MenuTypeIndex == 3 && game_customization.GetSelectedIndex2() == 0)
					{
						game_customization.MoveRight(Keyboard::D);
					}
					break;

					//menu buttons functionality
				case Keyboard::Return:
					if (MenuTypeIndex == 1)
					{
						switch (main_menu.GetSelectedIndex())
						{
						case 0:
							MenuTypeIndex = 3;
							break;
						case 1:
							MenuTypeIndex = 2;
							break;
						case 2:
							window.close();
							break;
						}
					}
					//option buttons functionality
					else if (MenuTypeIndex == 2)
					{
						switch (options_menu.GetSelectedIndex())
						{
						case 0:
							if (Fullscreen == 0)
							{
								window.create(VideoMode(1920, 1080), "Blow 'Em Up", Style::Fullscreen);
								window.setView(view);
								Fullscreen = 1;
							}
							else if (Fullscreen == 1)
							{
								window.create(VideoMode(960, 540), "Blow 'Em Up", Style::Resize || Style::Close);
								window.setView(view);
								Fullscreen = 0;
							}
							options_menu.ChangeButtonText(1);
							break;
						case 1:
							options_menu.ChangeButtonText(2);
							switch (options_menu.GetVolumeLevel())
							{
							case 0:
								volumeLevel = 0;
								menu_soundtrack.setVolume(0); break;

							case 1:
								volumeLevel = 1;
								menu_soundtrack.setVolume(5); break;
							case 2:
								volumeLevel = 2;
								menu_soundtrack.setVolume(25); break;
							case 3:
								volumeLevel = 3;
								menu_soundtrack.setVolume(50); break;
							case 4:
								volumeLevel = 4;
								menu_soundtrack.setVolume(100); break;
							}
							break;
						case 2:
							MenuTypeIndex = 1;
							options_menu.MoveUp();
							options_menu.MoveUp();
							break;
						}
					}
					else if (MenuTypeIndex == 3)
					{
						bool permission = 0;
						switch (game_customization.GetSelectedIndex1())
						{
						case 1:
							wait = true;
							break;

						case 2:
							wait5 = true;
							break;

						case 3:
							game_customization.SetP1Ready();
							game_customization.P1ReadyChange();
							break;

						case 4:
							MenuTypeIndex = 1;
							if (game_customization.GetP2Ready())
							{
								game_customization.SetP2Ready();
								game_customization.P2ReadyChange();
							}
							for (int i = 0; i < 4; i++)
							{
								game_customization.MoveUp(Keyboard::Up);
								game_customization.MoveUp(Keyboard::W);
							}

							break;
						}
					}
					break;

				case Keyboard::G:
					if (MenuTypeIndex == 3)
					{
						bool permission = 0;
						switch (game_customization.GetSelectedIndex2())
						{
						case 1:
							wait3 = true;
							break;

						case 2:
							wait7 = true;
							break;

						case 3:
							game_customization.SetP2Ready();
							game_customization.P2ReadyChange();
							break;

						case 4:
							MenuTypeIndex = 1;
							if (game_customization.GetP1Ready())
							{
								game_customization.SetP1Ready();
								game_customization.P1ReadyChange();
							}
							for (int i = 0; i < 4; i++)
							{
								game_customization.MoveUp(Keyboard::Up);
								game_customization.MoveUp(Keyboard::W);
							}
							break;
						}
						break;
					}

				}
				break;

			}

			if (wait2)
			{
			do {
				window.waitEvent(event2);
				if (event2.type == Event::KeyReleased)
				{
					game_customization.SetP1Key(event2.key.code);
				}
			} while (event2.type != Event::KeyReleased);
			game_customization.P1KeyChange();
			wait2 = false;
			}

			if (wait4)
			{
			do {
				window.waitEvent(event2);
				if (event2.type == Event::KeyReleased)
				{
					game_customization.SetP2Key(event2.key.code);
				}
			} while (event2.type != Event::KeyReleased);
			game_customization.P2KeyChange();
			wait4 = false;
			}

			if (wait6)
			{
				do {
					window.waitEvent(event2);
					if (event2.type == Event::KeyReleased)
					{
						game_customization.SetP1Key2(event2.key.code);
					}
				} while (event2.type != Event::KeyReleased);
				game_customization.P1KeyChange2();
				wait6 = false;
			}

			if (wait8)
			{
				do {
					window.waitEvent(event2);
					if (event2.type == Event::KeyReleased)
					{
						game_customization.SetP2Key2(event2.key.code);
					}
				} while (event2.type != Event::KeyReleased);
				game_customization.P2KeyChange2();
				wait8 = false;
			}

		}

		if (wait) {
			game_customization.waitButton(Keyboard::Return);
			wait2 = true;
			wait = false;
		}
		if (wait3) {
			game_customization.waitButton(Keyboard::G);
			wait4 = true;
			wait3 = false;
		}
		if (wait5) {
			game_customization.waitButton2(Keyboard::Return);
			wait6 = true;
			wait5 = false;
		}
		if (wait7) {
			game_customization.waitButton2(Keyboard::G);
			wait8 = true;
			wait7 = false;
		}

		if (loop_id == 1)
		{
			window.clear();

			if (MenuTypeIndex == 1)
			{
				main_menu.draw(window);
			}
			else if (MenuTypeIndex == 2)
			{
				options_menu.draw(window);
			}
			else if (MenuTypeIndex == 3)
			{
				game_customization.draw(window);
			}
			if (game_customization.GetP1Ready() && game_customization.GetP2Ready())
			{
				loop_id = 2;
				game_customization.SetP1Ready();
				game_customization.SetP2Ready();
				game_customization.P1ReadyChange();
				game_customization.P2ReadyChange();
				for (int i = 0; i < 3; i++)
				{
					game_customization.MoveUp(Keyboard::Up);
					game_customization.MoveUp(Keyboard::W);
				}
			}

			window.display();
		}
		else if (loop_id == 2)
		{
			menu_soundtrack.stop();
			break;
		}
	}
	if (loop_id == 2)
	{
		gameloop(Fullscreen, window, main_menu, options_menu, game_customization, volumeLevel);
	}
}


void gameloop(bool Fullscreen_tmp, RenderWindow &window, Menu &main_menu, Menu &options_menu, GameCustomization &game_customization, unsigned int volumeLevel)
{
	const unsigned int bombsQty = MAX_BOMB * 2;
	float switchTime = 0.08f;
	float speed = 140.0f;

	float checkTime = 0.0f;
	float *checkTime_ptr = &checkTime;
	float checkTime2 = 0.0f;
	float *checkTime2_ptr = &checkTime2;
	int loop_id2 = 2;
	int *loop_ptr = &loop_id2;

	int iterator = 0;
	int* iterator_ptr = &iterator;

	bool Fullscreen = Fullscreen_tmp;
	View view(FloatRect(0, 0, 1920, 1080));
	window.setView(view);

	Texture p1Texture;
	Texture p2Texture;
	Texture playerFace;
	Texture backgroundTexture;
	Texture groundTexture;
	Texture crateTexture;
	Texture wallTexture;
	Texture bombTexture;
	Texture explosionTexture;
	Texture powerupTexture;
	Texture deadTexture;
	Texture statsTexture;
	Texture specialTexture;
	Texture popupTexture;
	Texture c4Texture;
	Texture grenadeTexture;

	Font font;
	font.loadFromFile("fonts/menu_font.ttf");

	SoundBuffer* ignitionSound = new SoundBuffer();
	SoundBuffer* explosionSound = new SoundBuffer();
	SoundBuffer* screamSound = new SoundBuffer();
	SoundBuffer* plantSound = new SoundBuffer();
	SoundBuffer* throwingSound = new SoundBuffer();

	loadSounds(window, ignitionSound, explosionSound, screamSound, plantSound, throwingSound);
	loadTextures(window, backgroundTexture, groundTexture, bombTexture, statsTexture, specialTexture, popupTexture, c4Texture, grenadeTexture);
	loadPlayerTexture(p1Texture, game_customization.GetP1TextureIndex(), deadTexture,window);
	loadPlayerTexture(p2Texture, game_customization.GetP2TextureIndex(), deadTexture, window);
	loadPlayerFace(playerFace, window);

	Sprite background(backgroundTexture);
	Sprite ground(groundTexture);
	ground.setPosition(Vector2f(370, 100));

	Player *p1 = new Player(p1Texture, Vector2u(3, 4), switchTime, speed, 0, game_customization.GetP1Key(), game_customization.GetP1Key2(), Vector2f(490, 195), deadTexture, screamSound, volumeLevel);
	Player *p2 = new Player(p2Texture, Vector2u(3, 4), switchTime, speed, 1, game_customization.GetP2Key(), game_customization.GetP2Key2(), Vector2f(1750, 910), deadTexture, screamSound, volumeLevel);

	PlayerInfo p1Info(playerFace, game_customization.GetP1TextureIndex(), Vector2f(90, 45), 0, statsTexture, specialTexture, font);
	PlayerInfo p2Info(playerFace, game_customization.GetP2TextureIndex(), Vector2f(90, 545), 1, statsTexture, specialTexture, font);

	PopUp popupMenu(popupTexture, Vector2f(750, 400), font);
	bool isMenuOpened = false;

	Explosion* explosion[numRows][numColumns];
	Block* wall[numWalls];
	Block* crate[cratesQty];
	PowerUp* powerup[numPowerups + numSpecials];

	Bomb* bomb[bombsQty];
	for (int i = 0; i < bombsQty; i++)
	{
		bomb[i] = new Bomb(bombTexture, ignitionSound, volumeLevel);
	}

	C4* c4[numSpecials];
	for (int i = 0; i < numSpecials; i++)
	{
		c4[i] = new C4(c4Texture, plantSound, volumeLevel);
	}

	Grenade* grenade[numSpecials];
	for (int i = 0; i < numSpecials; i++)
	{
		grenade[i] = new Grenade(grenadeTexture, throwingSound, volumeLevel);
	}

	loadMap(window, explosion, crate, wall, crateTexture, wallTexture, explosionTexture, explosionSound, powerup, powerupTexture, volumeLevel);

	Clock clock;
	float deltaTime = 0.0f;

	Block* additionalWall[44];
	for (int i = 0; i < 44; i++)
	{
		additionalWall[i] = new Block(wallTexture, Vector2f(90, 90), Vector2f(2000, 1110), false);
	}

	Text resultMsg;
	resultMsg.setFont(font);
	resultMsg.setPosition(Vector2f(800, 400));
	resultMsg.setCharacterSize(120);
	resultMsg.setOutlineThickness(8);
	bool isGameEnded = false;
	bool* isGameEnded_ptr = &isGameEnded;

	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();

		Event event;

		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::KeyReleased:
				switch (event.key.code)
				{
				case Keyboard::Escape:
					if(!isMenuOpened && !isGameEnded) isMenuOpened = true;
					else if (isMenuOpened)
					{
						isMenuOpened = false;
						if (popupMenu.getSelectedIndex() == 1) popupMenu.Move();
					}
					break;

				case Keyboard::W:
					if (isMenuOpened) popupMenu.Move();
					break;

				case Keyboard::Up:
					if (isMenuOpened) popupMenu.Move();
					break;

				case Keyboard::S:
					if (isMenuOpened) popupMenu.Move();
					break;

				case Keyboard::Down:
					if (isMenuOpened) popupMenu.Move();
					break;

				case Keyboard::Return:
					if (isMenuOpened)
					{
						switch (popupMenu.getSelectedIndex())
						{
						case 0:
							isMenuOpened = false;
							break;
						case 1:
							loop_id2 = 1;
							break;
						}
					}
					break;

				case Keyboard::G:
					if (isMenuOpened)
					{
						switch (popupMenu.getSelectedIndex())
						{
						case 0:
							isMenuOpened = false;
							break;
						case 1:
							loop_id2 = 1;
							break;
						}
					}
					break;
				}
			}
		}

		if (!isMenuOpened)
		{

			for (int i = 0; i < bombsQty; i++)
			{
				if (bomb[i]->getIsPlanted()) bomb[i]->Update(deltaTime);
			}

			for (int i = 0; i < numSpecials; i++)
			{
				if (c4[i]->getIsPlanted()) c4[i]->Update(deltaTime);
			}

			for (int i = 0; i < numSpecials; i++)
			{
				if (grenade[i]->getIsThrown()) grenade[i]->Update(deltaTime);
			}

			p1->Update(deltaTime, bomb, c4, grenade);
			p2->Update(deltaTime, bomb, c4, grenade);

			for (int i = 0; i < numRows; i++)
			{
				for (int j = 0; j < numColumns; j++)
				{
					if (p1->getCollider().checkCollision2(explosion[i][j]->getCollider3()) && explosion[i][j]->getIsActive())
						p1->die();
					if (p2->getCollider().checkCollision2(explosion[i][j]->getCollider3()) && explosion[i][j]->getIsActive())
						p2->die();
				}
			}

			for (int i = 0; i < numWalls; i++)
			{
				wall[i]->getCollider().checkCollision(p1->getCollider(), 1.0f);
				wall[i]->getCollider().checkCollision(p2->getCollider(), 1.0f);

				for (int j = 0; j < numSpecials; j++)
				{
					if (grenade[j]->getCollider().checkCollision2(wall[i]->getCollider()) && grenade[j]->getIsThrown())
					{
						grenade[j]->move();
						grenade[j]->explode();
					}
				}
			}

			for (int i = 0; i < cratesQty; i++)
			{
				crate[i]->getCollider().checkCollision(p1->getCollider(), 1.0f);
				crate[i]->getCollider().checkCollision(p2->getCollider(), 1.0f);

				for (int j = 0; j < numSpecials; j++)
				{
					if (grenade[j]->getCollider().checkCollision2(crate[i]->getCollider()) && grenade[j]->getIsThrown())
					{
						grenade[j]->move();
						grenade[j]->explode();
					}
				}
			}

			for (int i = 0; i < 44; i++)
			{
				additionalWall[i]->getCollider().checkCollision(p1->getCollider(), 1.0f);
				additionalWall[i]->getCollider().checkCollision(p2->getCollider(), 1.0f);

				for (int j = 0; j < numSpecials; j++)
				{
					if (grenade[j]->getCollider().checkCollision2(additionalWall[i]->getCollider()) && grenade[j]->getIsThrown())
					{
						grenade[j]->move();
						grenade[j]->explode();
					}
				}
			}

			for (int i = 0; i < numRows; i++)
			{
				for (int j = 0; j < numColumns; j++)
				{
					if (p1->getCollider().checkCollision2(explosion[i][j]->getCollider()))
						p1->setPosition(explosion[i][j]->getPosition());
					if (p2->getCollider().checkCollision2(explosion[i][j]->getCollider()))
						p2->setPosition(explosion[i][j]->getPosition());
				}
			}

			for (int i = 0; i < (numPowerups + numSpecials); i++)
			{
				if (powerup[i]->getCollider().checkCollision2(p1->getCollider())) powerup[i]->effect(*p1);
				if (powerup[i]->getCollider().checkCollision2(p2->getCollider())) powerup[i]->effect(*p2);
			}

			for (int i = 0; i < bombsQty; i++)
			{
				if (bomb[i]->getIsPlanted())
				{
					bomb[i]->explode(deltaTime);
				}
			}

			for (int ii = 0; ii < bombsQty; ii++)
			{
				if (bomb[ii]->getIsExploding())
				{
					for (int i = 0; i < numRows; i++)
					{
						for (int j = 0; j < numColumns; j++)
						{
							if (explosion[i][j]->getCollider2().checkCollision2(bomb[ii]->getCollider()))
							{
								unsigned int range = bomb[ii]->getRange();
								explosion[i][j]->changeActive();
								for (int l = 0; l < cratesQty; l++)
								{
									if (crate[l]->getCollider().checkCollision2(explosion[i][j]->getCollider2())) crate[l]->changeExploded();
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j + jj < 15)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j + jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j + jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j - jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j - jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j - jj]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j - jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i + jj < 9)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i + jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i + jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i + jj][j]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i + jj][j]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i - jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i - jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i - jj][j]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i - jj][j]->changeActive();
									}
								}
							}
						}
					}
				}
			}

			for (int ii = 0; ii < numSpecials; ii++)
			{
				if (c4[ii]->getIsExploding())
				{
					for (int i = 0; i < numRows; i++)
					{
						for (int j = 0; j < numColumns; j++)
						{
							if (explosion[i][j]->getCollider2().checkCollision2(c4[ii]->getCollider()))
							{
								unsigned int range = c4[ii]->getRange();
								explosion[i][j]->changeActive();
								for (int l = 0; l < cratesQty; l++)
								{
									if (crate[l]->getCollider().checkCollision2(explosion[i][j]->getCollider2())) crate[l]->changeExploded();
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j + jj < 15)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j + jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j + jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j - jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j - jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j - jj]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j - jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i + jj < 9)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i + jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i + jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i + jj][j]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i + jj][j]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i - jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i - jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i - jj][j]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i - jj][j]->changeActive();
									}
								}
							}
						}
					}
				}
			}

			for (int ii = 0; ii < numSpecials; ii++)
			{
				if (p1->getCollider().checkCollision2(grenade[ii]->getCollider()) && grenade[ii]->getOwner() != 0 && grenade[ii]->getIsThrown()) grenade[ii]->explode();
				if (p2->getCollider().checkCollision2(grenade[ii]->getCollider()) && grenade[ii]->getOwner() != 1 && grenade[ii]->getIsThrown()) grenade[ii]->explode();
			}

			for (int ii = 0; ii < numSpecials; ii++)
			{
				if (grenade[ii]->getIsThrown())
				{
					for (int i = 0; i < numRows; i++)
					{
						for (int j = 0; j < numColumns; j++)
						{
							if (explosion[i][j]->getCollider2().checkCollision2(grenade[ii]->getCollider())) grenade[ii]->rangeCounter(i, j);
						}
					}
				}
			}

			for (int ii = 0; ii < numSpecials; ii++)
			{
				if (grenade[ii]->getIsExploding())
				{
					for (int i = 0; i < numRows; i++)
					{
						for (int j = 0; j < numColumns; j++)
						{
							if (explosion[i][j]->getCollider2().checkCollision2(grenade[ii]->getCollider()))
							{
								unsigned int range = 1;
								explosion[i][j]->changeActive();
								for (int l = 0; l < cratesQty; l++)
								{
									if (crate[l]->getCollider().checkCollision2(explosion[i][j]->getCollider2())) crate[l]->changeExploded();
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j + jj < 15)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j + jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j + jj]->getCollider2().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j + jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (j - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i][j - jj]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i][j - jj]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i][j - jj]->getCollider().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i][j - jj]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i + jj < 9)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i + jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i + jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i + jj][j]->getCollider().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i + jj][j]->changeActive();
									}
								}
								for (int jj = 1; jj < range + 1; jj++)
								{
									bool breakNow = false;
									if (i - jj > -1)
									{
										for (int k = 0; k < cratesQty; k++)
										{
											if (explosion[i - jj][j]->getCollider2().checkCollision2(crate[k]->getCollider()))
											{
												explosion[i - jj][j]->changeActive(); crate[k]->changeExploded(); breakNow = true;
												break;
											}
										}
										for (int k = 0; k < numWalls; k++)
										{
											if (explosion[i - jj][j]->getCollider().checkCollision2(wall[k]->getCollider()))
											{
												breakNow = true;
												break;
											}
										}
										if (breakNow) break;
										else explosion[i - jj][j]->changeActive();
									}
								}
							}
						}
					}
				}
			}

			for (int i = 0; i < bombsQty; i++)
			{
				if (bomb[i]->getIsExploding())
				{
					if (bomb[i]->getOwner() == 0)
						p1->ammoUp();
					else if (bomb[i]->getOwner() == 1)
						p2->ammoUp();

					bomb[i]->changeExplode();
				}
			}

			for (int i = 0; i < cratesQty; i++)
			{
				if (crate[i]->getIsExploded())
				{
					crate[i]->collapse();
				}
			}

			for (int i = 0; i < numRows; i++)
			{
				for (int j = 0; j < numColumns; j++)
				{
					if (explosion[i][j]->getIsActive()) explosion[i][j]->Update(deltaTime);
				}
			}

			for (int i = 0; i < numSpecials; i++)
			{
				if (c4[i]->getIsExploding()) c4[i]->changeExplode();
				if (grenade[i]->getIsExploding()) grenade[i]->changeExplode();
			}

			p1Info.Update(*p1);
			p2Info.Update(*p2);

			shrinkMap(deltaTime, checkTime2_ptr, additionalWall, iterator_ptr, *p1, *p2);

			if ((p1->getIsDead() || p2->getIsDead()) && !isGameEnded) checkWinner(deltaTime, checkTime_ptr, p1->getIsDead(), p2->getIsDead(), isGameEnded_ptr, resultMsg);

		}

		if (isGameEnded) endGame(deltaTime, checkTime_ptr, loop_ptr);

		if (loop_id2 == 2)
		{
			window.clear();
			window.draw(background);
			window.draw(ground);	
			for (int i = 0; i < (numPowerups + numSpecials); i++)
			{
				powerup[i]->draw(window);
			}
			for (int i = 0; i < cratesQty; i++)
			{
				crate[i]->draw(window);
			}
			for (int i = 0; i < bombsQty; i++)
			{
				if (bomb[i]->getIsPlanted())
				{
					bomb[i]->draw(window);
				}
			}
			for (int i = 0; i < numSpecials; i++)
			{
				if (c4[i]->getIsPlanted())
				{
					c4[i]->draw(window);
				}
				if (grenade[i]->getIsThrown())
				{
					grenade[i]->draw(window);
				}
			}
			for (int i = 0; i < numWalls; i++)
			{
				wall[i]->draw(window);
			}
			for (int i = 0; i < 44; i++)
			{
				additionalWall[i]->draw(window);
			}
			p1->draw(window);
			p2->draw(window);
			for (int i = 0; i < numRows; i++)
			{
				for (int j = 0; j < numColumns; j++)
				{
					if (explosion[i][j]->getIsActive())
					explosion[i][j]->draw(window);
				}

			}
			p1Info.draw(window);
			p2Info.draw(window);
			if (isGameEnded) window.draw(resultMsg);
			if (isMenuOpened) popupMenu.draw(window);
			window.display();
		}
		else if (loop_id2 == 1)
		{
			break;
		}
	}

	if (loop_id2 == 1)
	{

		for (int i = 0; i < (numPowerups+numSpecials); i++)
		{
			delete powerup[i];
		}
		for (int i = 0; i < cratesQty; i++)
		{
			delete crate[i];
		}
		for (int i = 0; i < bombsQty; i++)
		{
			delete bomb[i];
		}
		for (int i = 0; i < numWalls; i++)
		{
			delete wall[i];
		}
		for (int i = 0; i < numRows; i++)
		{
			for (int j = 0; j < numColumns; j++)
			{
				delete explosion[i][j];
			}
		}
		for (int i = 0; i < 44; i++)
		{
			delete additionalWall[i];
		}
		for (int i = 0; i < numSpecials; i++)
		{
			delete c4[i];
		}
		for (int i = 0; i < numSpecials; i++)
		{
			delete grenade[i];
		}

		delete explosionSound;
		delete ignitionSound;
		delete screamSound;
		delete plantSound;
		delete throwingSound;
		delete p1;
		delete p2;

		menuloop(Fullscreen, window, main_menu, options_menu, game_customization, volumeLevel);
	}
}