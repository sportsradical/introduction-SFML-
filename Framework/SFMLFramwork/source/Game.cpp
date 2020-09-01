#include"Game.h"



Game* Game::s_pGame = 0;

Game::Game(): isRuning(true), m_pwindow(nullptr)
{
}

Game::~Game()
{
}


bool Game::Initialized(std::string title, int width, int height, bool isfullScreen)
{
	int flags = 0;

	if (isfullScreen == true)
	{
		flags = sf::Style::Fullscreen;
	}
	else
	{
		flags = sf::Style::Default;
	}

	m_pwindow = new sf::RenderWindow(sf::VideoMode(width, height), title, flags);

	if (m_pwindow != 0)
	{
		std::cout << "Sucess Create window " << "\n";
		return true;
	}

	return false;
}

void Game::Run()
{
	while (isRuning)
	{
		while (m_pwindow->isOpen())
		{
			UpdateHandles();
		}
	}

	shutDown();
}

void Game::UpdateHandles()
{
}

void Game::Update()
{
	sf::Event event;
	while (m_pwindow->pollEvent(event))
	{
		switch (event.type)
		{
		case sf::Event::Closed:
			isRuning = false;
			break;
		default:
			break;
		}
	}
}

void Game::Draw()
{
	m_pwindow->clear(sf::Color::Black);
	m_pwindow->display();
}

void Game::shutDown()
{
	m_pwindow->close();
}
