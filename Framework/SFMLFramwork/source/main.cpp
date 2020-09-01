#include"Game.h"





int main()
{
	TheGame::Instance()->Initialized("hello  world", 800, 600, false);

	while (TheGame::Instance()->GetIsRuning())
	{
		TheGame::Instance()->Update();
		TheGame::Instance()->Draw();
	}

	return 0;
}