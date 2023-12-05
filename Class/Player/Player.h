#pragma once
#include "Vector2.h"

class Player final {
public: // ** メンバ関数 ** //

	// 初期化
	void Init();
	// 初期化
	void Update();
	// 初期化
	void Draw();

	// 操作系メンバ関数
	void MoveRight();
	void MoveLeft();

private: // ** メンバ変数 ** //

	// 速度
	const float kMoveSpeed_ = 3.0f;

	// 座標
	Vector2 position_;
};