#include "Animation.h"



Animation::Animation(Texture &texture, Vector2u imageCount_tmp, float switchTime_tmp)
{
	imageCount = imageCount_tmp;
	switchTime = switchTime_tmp;
	totalTime = 0.0f;
	currentImage.x = 0;

	rectTexture.width = texture.getSize().x / float(imageCount.x);
	rectTexture.height = texture.getSize().y / float(imageCount.y);
}


Animation::~Animation()
{
}

void Animation::Update(unsigned int row, float deltaTime)
{
	currentImage.y = row;
	totalTime += deltaTime;

	if (totalTime >= switchTime)
	{
		totalTime -= switchTime;
		if (currentImage.x >= (imageCount.x-1))
		{
			currentImage.x = 0;
		}
		else currentImage.x++;
	}

	rectTexture.left = currentImage.x * rectTexture.width;
	rectTexture.top = currentImage.y * rectTexture.height;
}

void Animation::Update2(unsigned int row, float deltaTime)
{
	currentImage.y = row;
	totalTime += deltaTime;

	if (currentImage.x == 0)
	{
		if (totalTime >= switchTime)
		{
			totalTime -= switchTime;
			currentImage.x++;
		}
	}
	else if (currentImage.x == 1)
	{
		if (totalTime >= 0.2f)
		{
			totalTime -= 0.2f;
			currentImage.x = 0;
		}
	}

	rectTexture.left = currentImage.x * rectTexture.width;
	rectTexture.top = currentImage.y * rectTexture.height;
}

void Animation::Reinitialize(Texture & texture, Vector2u imageCount_tmp, float switchTime_tmp)
{
	imageCount = imageCount_tmp;
	switchTime = switchTime_tmp;
	totalTime = 0.0f;
	currentImage.x = 0;

	rectTexture.width = texture.getSize().x / float(imageCount.x);
	rectTexture.height = texture.getSize().y / float(imageCount.y);
}
