#pragma once
#include <Novice.h>

class InputManager final {
public: // ** メンバ関数 ** //

	// シングルトン
	static InputManager* GetInstance();

	// コンストラクタ
	InputManager() = default;

	// 更新
	void Update();

	// 入力受付
	bool GetKeyTrigger(BYTE keyID);
	bool GetKeyPress(BYTE keyID);
	bool GetKeyRelease(BYTE keyID);
	bool GetKeyNone(BYTE keyID);


private: // ** メンバ変数 ** //

	// キー入力結果を受け取る箱
	char keys_[256] = { 0 };
	char preKeys_[256] = { 0 };
};