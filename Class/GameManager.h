#pragma once
#include "Scene/IScene.h"

/// <summary>
/// ゲーム管理クラス
/// </summary>
class GameManager {
public: // ** メンバ関数 ** //
	
	GameManager() = default;	// コンストラクタ
	~GameManager() = default;	// デストラクタ
	
	// この関数でゲームループを呼び出す
	int Run(const char* windowTitle);

private: // ** メンバ変数 ** //

	// シーンのポインタ
	IScene* currentScene_;
};