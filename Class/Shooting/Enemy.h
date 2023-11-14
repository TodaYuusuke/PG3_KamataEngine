#pragma once
#include "Vector2.h"

class Enemy final {
public: // ** メンバ関数 ** //

	// 初期化
	void Init();
	// 初期化
	void Update();
	// 初期化
	void Draw();

	// 座標を受け取る
	Vector2 GetPosition() { return position_; }
	// 半径を受け取る
	float GetRadius() { return radius_; }

	// 死亡フラグ切り替え
	void SetDeadFlag(bool b) { isDead = b; }
	bool GetDeadFlag() { return isDead; }

private: // ** メンバ変数 ** //

	// 座標
	Vector2 position_;
	// 半径
	float radius_;

	// 死亡判定
	bool isDead;
};