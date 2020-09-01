#include"TextureManager.h"





TextureManager* TextureManager::s_pTtextureManager = 0;

TextureManager::TextureManager()
{

}

TextureManager::~TextureManager()
{
}


bool TextureManager::Load(std::string filename)
{
	
	sf::Texture* m_pTexture = new sf::Texture();

	if(!m_pTexture->loadFromFile(filename.c_str()))
	{
		std::cout << "Failed Load Texture" << "\n";
		return true;
	}

	return false;

}

