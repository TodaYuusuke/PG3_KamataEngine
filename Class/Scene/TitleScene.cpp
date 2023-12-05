#pragma once
#include "TitleScene.h"

void TitleScene::Init() {
	inputHandler_ = new InputHandler();
	// Assign Command
	inputHandler_->AssignMoveRightCommand2PressKeyD();
	inputHandler_->AssignMoveLeftCommand2PressKeyA();

	player_ = new Player();
	player_->Init();
};
void TitleScene::Update() {
	iCommand_ = inputHandler_->HandleInput();

	// Set Command
	if (this->iCommand_) {
		iCommand_->Exec(*player_);
	}

	player_->Update();
};
void TitleScene::Draw() {
	player_->Draw();
};