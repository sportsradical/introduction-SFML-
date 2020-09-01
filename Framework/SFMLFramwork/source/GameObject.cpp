#include "GameObject.h"




Gamebject::Gamebject(): m_position(0.0f, 0.0f),
                        m_rotation(0.0f, 0.0f),
	                    m_scale(1.0f, 1.0f)

{

}

Gamebject::~Gamebject()
{
}



void Gamebject::SetPosition(float x, float y)
{
}

void Gamebject::SetPosition(sf::Vector2f position)
{
}

void Gamebject::SetRotation(float x, float y)
{
}

void Gamebject::SetRotation(sf::Vector2f position)
{
}

void Gamebject::SetScale(float x, float y)
{
}

void Gamebject::SetScale(sf::Vector2f position)
{
}

sf::Vector2f Gamebject::GetPosition()
{
	return sf::Vector2f();
}

sf::Vector2f Gamebject::GetRotation()
{
	return sf::Vector2f();
}

sf::Vector2f Gamebject::GetScale()
{
	return sf::Vector2f();
}
