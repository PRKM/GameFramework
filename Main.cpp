#include "Game.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) 
{

	if (SUCCEEDED(CoInitialize(NULL))){

		{
			Frame * frame = new Frame(hInstance, "GameFrame");
			Game game = Game(frame);

			//TODO:게임안에 Frame 빼고 포인터로 담을 수 있도록 하기
			if (game.Start(nCmdShow, "What the fuck") == S_OK)
				game.StartLooping();
		}

		CoUninitialize();
	}
}