#pragma once
#include "IScene.h"

#include "../Player/Player.h"
#include "../Command/ICommand.h"
#include "../Command/InputHandler.h"

/// <summary>
/// タイトル
/// </summary>
class TitleScene : public IScene {
public: // ** メンバ関数 ** //
	
	// 初期化
	void Init() override;
	// 更新
	void Update() override;
	// 描画
	void Draw() override;


private: // ** メンバ変数 ** //

	InputHandler* inputHandler_ = nullptr;
	ICommand* iCommand_ = nullptr;
	Player* player_;
};