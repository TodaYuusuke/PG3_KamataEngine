#include "GameManager.h"

#include <Novice.h>
#include "InputManager.h"
#include "Scene/TitleScene.h"

int GameManager::Run(const char* windowTitle) {
	// ライブラリの初期化
	Novice::Initialize(windowTitle, 1280, 720);

	// シーン初期化
	currentScene_ = new TitleScene();
	currentScene_->Init();

	// ウィンドウの×ボタンが押されるまでループ
	while (Novice::ProcessMessage() == 0) {
		// フレームの開始
		Novice::BeginFrame();

		// 入力更新
		InputManager::GetInstance()->Update();

		///
		/// ↓更新処理ここから
		///

		// シーン切り替え検知
		if (currentScene_->GetNextScene() != nullptr) {
			currentScene_ = currentScene_->GetNextScene();
			currentScene_->Init();
		}

		currentScene_->Update();

		///
		/// ↑更新処理ここまで
		///

		///
		/// ↓描画処理ここから
		///
		
		currentScene_->Draw();

		///
		/// ↑描画処理ここまで
		///

		// フレームの終了
		Novice::EndFrame();

		// ESCキーが押されたらループを抜ける
		if (InputManager::GetInstance()->GetKeyTrigger(DIK_ESCAPE)) {
			break;
		}
	}

	// ライブラリの終了
	Novice::Finalize();

	return 0;
};