#pragma once

#include <Windows.h>
#include "Frame.h"
#include "Graphics.h"

class Game
{
private:
	Frame * m_pFrame;
	Graphics * m_pGraphics;

public:
	Game(HINSTANCE hInstance);
	~Game();

	HRESULT Start(int nCmdShow);
	//TODO:���� Ŭ���� �߰� �� �ñ״��Ŀ� ����ұ�
	HRESULT LoadLevel();

};

