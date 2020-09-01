#pragma once
#ifndef __SPRITEMANAGER_H_
#define __SPRITEMANAGER_H_

#include"SFML/Graphics.hpp"

class SpriteManager
{
public:

	static SpriteManager* Instance()
	{

		if (s_pSpriteManager == 0)
		{
			s_pSpriteManager = new SpriteManager();
			return s_pSpriteManager;
		}
		return s_pSpriteManager;
	}

	void SetTexture(sf::Texture texture);
	void setSize(float x, float y);

	void setPosition(float x, float y);
	void setPosition(sf::Vector2f position);

	void Draw(sf::RenderWindow window);
private:
	SpriteManager();
	~SpriteManager();

private:
	sf::Sprite* m_pSprite;
	sf::Vector2f m_position;

	static SpriteManager* s_pSpriteManager;
};
#endif // !__SPRITEMANAGER_H_
typedef SpriteManager TheSpriteManager;