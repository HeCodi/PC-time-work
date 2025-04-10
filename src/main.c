#include <d3d11.h>
#include <stdio.h>
#include <stdlib.h>

HWND g_hWnd = NULL;
ID3D11Device* g_pDevice = NULL;
ID3D11DeviceContext* g_pImmediateContext = NULL;
IDXGISwapChain* g_pSwapChain = NULL;
ID3D11RenderTargetView* g_pRenderTargetView = NULL;
D3D11_VIEWPORT g_viewport;

const float ClearColor[4] = { 1.0f, 0.0f, 1.0f, 1.0f };

LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam) {
    switch (message) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hWnd, message, wParam, lParam);
    }
}