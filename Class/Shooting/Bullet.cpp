#include "Bullet.h"
#include <Novice.h>
#include "Enemy.h"

#include <cmath>

// 初期化
void Bullet::Init(Vector2 startPosition) {
	position_ = startPosition;
	radius_ = 5;
}
// 初期化
void Bullet::Update(Enemy* enemy) {
	position_.y -= 5;

	// 二つの円の中心座標間の距離を計算
	float distance = std::sqrtf(std::powf(enemy->GetPosition().x - position_.x, 2) +
		std::powf(enemy->GetPosition().y - position_.y, 2));

	// 距離が二つの円の半径の和以下であれば当たり
	if (distance <= (radius_ + enemy->GetRadius())) {
		enemy->SetDeadFlag(true);
	}
}
// 初期化
void Bullet::Draw() {
	Novice::DrawEllipse((int)position_.x, (int)position_.y, (int)radius_, (int)radius_, 0, WHITE, kFillModeSolid);
}