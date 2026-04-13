#include <DxLib.h>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    // 画面サイズを 800x600 に設定
    ChangeWindowMode(TRUE);  // ウィンドウモード
    SetGraphMode(800, 600, 32);

    if (DxLib_Init() == -1) return -1;
    SetDrawScreen(DX_SCREEN_BACK);



    DxLib_End();
    return 0;
}
