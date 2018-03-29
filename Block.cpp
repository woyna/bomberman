#include "Block.h"



Block::Block(Texture &texture, Vector2f size, Vector2f position_tmp, bool isDestroyable_tmp)
{
	blockTexture = texture;

	block.setSize(size);
	block.setOrigin(block.getSize() / 2.0f);
	block.setPosition(position_tmp);
	block.setTexture(&texture);
	isDestroyable = isDestroyable_tmp;
	isExploded = false;
	isCollapsed = true;
}

Block::~Block()
{
}


void Block::draw(RenderWindow & window)
{
	window.draw(block);
}

void Block::collapse()
{
	block.setPosition(Vector2f(2000, 1100));
	isExploded = 0;
	isCollapsed = true;
}
