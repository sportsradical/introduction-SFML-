#pragma once
#ifndef __GAME_H_
#define __GAME_H_


// core
#include<iostream>
#include<string>
// include SFML


#include<SFML/Graphics.hpp>
#include<SFML/Main.hpp>



/*
sfml-audio-d.lib
sfml-graphics-d.lib
sfml-main-d.lib
sfml-system-d.lib
sfml-window-d.lib
*/

class Game
{
public:

	static Game* Instance()
	{
		if (s_pGame == 0)
		{
			s_pGame = new Game();
			return s_pGame;
		}

		return s_pGame;
	}


	bool Initialized(std::string title, int width, int height, bool isfullScreen);
	void Run();
	void Update();
	void Draw();




	bool GetIsRuning() { return isRuning; };
private:
	
	void UpdateHandles();
	void shutDown();

private:
	sf::RenderWindow* m_pwindow;
	int m_screenWidth;
	int m_screenHeight;

	std::string m_title;

	bool isRuning;

private:
	Game();
	~Game();

	static Game* s_pGame;

};
typedef Game TheGame;
#endif // !__GAME_H_
