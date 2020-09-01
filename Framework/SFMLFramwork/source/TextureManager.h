#pragma once
#ifndef __TEXTUREMANAGER_H_
#define __TEXTUREMANAGER_H_

// core
#include<iostream>
#include<string>

// include sfml
#include<SFML/Graphics.hpp>



class TextureManager
{
public:
	static TextureManager* Instance()
	{
		if (s_pTtextureManager == 0)
		{
			s_pTtextureManager = new TextureManager();
			return s_pTtextureManager;
		}
		return s_pTtextureManager;
	}

	
	bool Load(std::string filename);
	
private:
	TextureManager();
	~TextureManager();
private:

	static TextureManager* s_pTtextureManager;

};
#endif // __TEXTUREMANAGER_H_

typedef TextureManager TheTextureManager;