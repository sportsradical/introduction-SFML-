#pragma once
#ifndef __GAMEOBJECT_H_
#define __GAMEOBJECT_H_

#include<SFML/Graphics.hpp>





class Gamebject
{
public:
	Gamebject();
	~Gamebject();


	virtual void Update() = 0;
	virtual void Draw(sf::RenderWindow* window) = 0;



protected:

	void SetPosition(float x, float y);
	void SetPosition(sf::Vector2f position);

	void SetRotation(float x, float y);
	void SetRotation(sf::Vector2f position);

	void SetScale(float x, float y);
	void SetScale(sf::Vector2f position);




	sf::Vector2f GetPosition();
	sf::Vector2f GetRotation();
	sf::Vector2f GetScale();


private:

	sf::Vector2f m_position;
	sf::Vector2f m_rotation;
	sf::Vector2f m_scale;

private:
	sf::Sprite* m_pSprite;



};

#endif // !__GAMEOBJECT_H_
