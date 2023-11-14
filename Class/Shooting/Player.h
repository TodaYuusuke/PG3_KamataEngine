#pragma once
#include "Vector2.h"
#include "Bullet.h"

// 前方宣言
class Enemy;

class Player final {
public: // ** メンバ関数 ** //

	// 初期化
	void Init();
	// 初期化
	void Update(Enemy* enemy);
	// 初期化
	void Draw();


private: // ** メンバ変数 ** //

	// 座標
	Vector2 position_;
	// 弾
	Bullet bullet_;
};