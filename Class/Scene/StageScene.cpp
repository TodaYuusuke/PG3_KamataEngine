#pragma once
#include "StageScene.h"
#include "ClearScene.h"

void StageScene::Init() {
	player_.Init();
	enemy_.Init();
};
void StageScene::Update() {
	player_.Update(&enemy_);
	enemy_.Update();

	// 敵が死んだら次のシーンへ
	if (enemy_.GetDeadFlag()) {
		nextScene_ = new ClearScene();
	}
};
void StageScene::Draw() {
	Novice::ScreenPrintf(100, 100, "Stage Scene");
	Novice::ScreenPrintf(100, 120, "Space ... Shot");

	player_.Draw();
	enemy_.Draw();
};