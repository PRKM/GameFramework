#include "Game.h"

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPTSTR lpCmdLine, int nCmdShow) 
{

	if (SUCCEEDED(CoInitialize(NULL))){

		{
			Frame * frame = new Frame(hInstance, "GameFrame");
			Game game = Game(frame);

			//TODO:���Ӿȿ� Frame ���� �����ͷ� ���� �� �ֵ��� �ϱ�
			if (game.Start(nCmdShow, "What the fuck") == S_OK)
				game.StartLooping();
		}

		CoUninitialize();
	}
}