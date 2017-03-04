#include "Game.h"


Game::Game(HINSTANCE hInstance)
	//TODO:m_pRenderHandler�� ���� �� ���°�
	:m_pFrame(new Frame(hInstance, "Default Class Name")),
	 m_pGraphics(new Graphics())
{
}

Game::~Game()
{
}

HRESULT Game::Start(int nCmdShow)
{

	//�׷��Ƚ� �ʱ�ȭ
	if (FAILED(m_pGraphics->initialize(m_pFrame->GetHWND()))) {

		return S_FALSE;
	}

	if (FAILED(m_pFrame->InitializeFrame(nCmdShow, "ASD"))) {

		return S_FALSE;
	}


	//�帧�� ���⼭ �޽��� ���� �Լ��� ������
	m_pFrame->LoopMessage();
	//�׷��� �ʿ䰡 ������?
	//���� ���� �� ���?
	return S_OK;
}

