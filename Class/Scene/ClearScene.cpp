#pragma once
#include "ClearScene.h"
#include "TitleScene.h"

void ClearScene::Init() {

};
void ClearScene::Update() {
	if (InputManager::GetInstance()->InputManager::GetKeyTrigger(DIK_SPACE)) {
		nextScene_ = new TitleScene();
	}
};
void ClearScene::Draw() {
	// タイトル表示
	Novice::ScreenPrintf(100, 100, "Clear Scene");
	Novice::ScreenPrintf(100, 120, "Space ... Title");
	Novice::ScreenPrintf(100, 140, "Esc ... GameEnd");
};