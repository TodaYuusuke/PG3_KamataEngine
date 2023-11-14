#include "Class/GameManager.h"

const char kWindowTitle[] = "LE2B_14_トダユウスケ_PG3_03_01";

// Windowsアプリでのエントリーポイント(main関数)
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	GameManager gameManager;
	return gameManager.Run(kWindowTitle);
}
