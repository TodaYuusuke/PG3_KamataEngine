#pragma once
#include "Vector2.h"

// 前方宣言
class Enemy;

class Bullet final {
public: // ** メンバ関数 ** //

	// 初期化
	void Init(Vector2 startPosition);
	// 初期化
	void Update(Enemy* enemy);
	// 初期化
	void Draw();


private: // ** メンバ変数 ** //

	// 座標
	Vector2 position_;
	// 半径
	float radius_;
};