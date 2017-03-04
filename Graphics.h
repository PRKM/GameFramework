#pragma once

#include <Windows.h>

#include <d2d1_1.h>
#include <d2d1_1helper.h>
#include <dwrite.h>
#include <wincodec.h>

#include <cassert>

class Graphics
{
private:
	//TODO:Ÿ�� ������ �ڵ��� �ʿ�����
	ID2D1Factory * m_pDirect2DFactory;
	ID2D1HwndRenderTarget * m_pRenderTarget;

	bool m_bIsInitialized;

private:
	HRESULT CreateDeviceResource(HWND hWnd);
	void ReleaseDeviceResource();

public:
	Graphics();
	~Graphics();

	HRESULT initialize(HWND targetHWND);

	void BeginDraw() {

		assert(m_bIsInitialized == true);
		m_pRenderTarget->BeginDraw(); 
	}
	void EndDraw() {

		assert(m_bIsInitialized == true);
		m_pRenderTarget->EndDraw(); 
	}

};
