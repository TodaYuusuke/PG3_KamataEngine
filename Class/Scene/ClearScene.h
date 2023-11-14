#pragma once
#include "IScene.h"

/// <summary>
/// タイトル
/// </summary>
class ClearScene : public IScene {
public: // ** メンバ関数 ** //
	
	// 初期化
	void Init() override;
	// 更新
	void Update() override;
	// 描画
	void Draw() override;


private: // ** メンバ変数 ** //
};