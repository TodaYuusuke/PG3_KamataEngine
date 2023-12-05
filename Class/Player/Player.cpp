#include "Player.h"
#include <Novice.h>
#include "../InputManager.h"

void Player::Init() {
	position_ = { 100.0f, 100.0f };
}

void Player::Update() {}

void Player::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, 30, 30, 0, WHITE, kFillModeSolid);
}

void Player::MoveRight() {
	position_.x += kMoveSpeed_;
}
void Player::MoveLeft() {
	position_.x -= kMoveSpeed_;
}