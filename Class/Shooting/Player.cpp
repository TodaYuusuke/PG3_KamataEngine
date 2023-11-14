#include "Player.h"
#include <Novice.h>
#include "../InputManager.h"

void Player::Init() {
	position_ = { 1280.0f / 2.0f, 500.0f };
	bullet_.Init({ 10000.0f,10000.0f });
}

void Player::Update(Enemy* enemy) {
	InputManager* input = InputManager::GetInstance();

	if (input->GetKeyPress(DIK_W)) {
		position_.y -= 5;
	}
	if (input->GetKeyPress(DIK_S)) {
		position_.y += 5;
	}
	if (input->GetKeyPress(DIK_D)) {
		position_.x += 5;
	}
	if (input->GetKeyPress(DIK_A)) {
		position_.x -= 5;
	}

	if (input->GetKeyTrigger(DIK_SPACE)) {
		bullet_.Init(position_);
	}

	bullet_.Update(enemy);
}

void Player::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, 30, 30, 0, BLUE, kFillModeSolid);
	bullet_.Draw();
}