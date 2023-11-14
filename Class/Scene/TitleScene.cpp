#pragma once
#include "TitleScene.h"
#include "StageScene.h"

void TitleScene::Init() {

};
void TitleScene::Update() {
	if (InputManager::GetInstance()->InputManager::GetKeyTrigger(DIK_SPACE)) {
		nextScene_ = new StageScene();
	}
};
void TitleScene::Draw() {
	// タイトル表示
	Novice::ScreenPrintf(100, 100, "Title Scene");
	Novice::ScreenPrintf(100, 120, "Space ... Start");
};