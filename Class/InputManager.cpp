#include "InputManager.h"

InputManager* InputManager::GetInstance() {
	static InputManager instance;
	return &instance;
}

void InputManager::Update() {
	// キー入力を受け取る
	memcpy(preKeys_, keys_, 256);
	Novice::GetHitKeyStateAll(keys_);
}

bool InputManager::GetKeyTrigger(BYTE keyID) {
	return !preKeys_[keyID] && keys_[keyID];
}
bool InputManager::GetKeyPress(BYTE keyID) {
	return keys_[keyID];
}
bool InputManager::GetKeyRelease(BYTE keyID) {
	return preKeys_[keyID] && !keys_[keyID];
}
bool InputManager::GetKeyNone(BYTE keyID) {
	return !keys_[keyID];
}