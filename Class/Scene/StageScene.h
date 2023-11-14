#pragma once
#include "IScene.h"

#include "../Shooting/Player.h"
#include "../Shooting/Enemy.h"
#include "../Shooting/Bullet.h"

/// <summary>
/// タイトル
/// </summary>
class StageScene : public IScene {
public: // ** メンバ関数 ** //
	
	// 初期化
	void Init() override;
	// 更新
	void Update() override;
	// 描画
	void Draw() override;


private: // ** メンバ変数 ** //

	// プレイヤー
	Player player_;
	// 敵
	Enemy enemy_;
};