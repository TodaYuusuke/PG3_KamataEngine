#include "Enemy.h"
#include <Novice.h>

void Enemy::Init() {
	position_ = { 1280.0f / 2.0f, 100.0f };
	radius_ = 30;
	isDead = false;
}

void Enemy::Update() {
}

void Enemy::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)radius_, (int)radius_, 0, RED, kFillModeSolid);
}