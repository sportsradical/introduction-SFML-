#pragma once
#ifndef __RECTGAMEOBJECT_H_
#define __RECTGAMEOBJECT_H_

#include"GameObject.h"
#include"TextureManager.h"
#include"SpriteManager.h"



class RectGameObject: public Gamebject
{
public:
	RectGameObject();
	~RectGameObject();


	// Inherited via Gamebject
	virtual void Update() override;

	virtual void Draw(sf::RenderWindow* window) override;

};

#endif // !__RECTGAMEOBJECT_H_
