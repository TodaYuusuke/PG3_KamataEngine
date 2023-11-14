#pragma once
#include <Novice.h>
#include "../InputManager.h"

/// <summary>
/// シーンの基底クラス
/// </summary>
class IScene {
public: // ** メンバ関数 ** //
	
	// 仮想デストラクタ
	virtual ~IScene() = default;

	// 初期化
	virtual void Init() = 0;
	// 更新
	virtual void Update() = 0;
	// 描画
	virtual void Draw() = 0;

	// 次のシーンのポインタを受け取る
	IScene* GetNextScene() { return nextScene_; }


protected: // ** メンバ変数 ** //

	// 次のシーン用のインスタンスを入れるポインタ
	IScene* nextScene_ = nullptr;
};