#include "InputHandler.h"
#include "../InputManager.h"

void InputHandler::AssignMoveLeftCommand2PressKeyA() {
	ICommand* command = new MoveLeftCommand();
	this->pressKeyA_ = command;
}
void InputHandler::AssignMoveRightCommand2PressKeyD() {
	ICommand* command = new MoveRightCommand();
	this->pressKeyD_ = command;
}
ICommand* InputHandler::HandleInput() {
	if (InputManager::GetInstance()->GetKeyPress(DIK_D)) {
		return pressKeyD_;
	}
	else if (InputManager::GetInstance()->GetKeyPress(DIK_A)) {
		return pressKeyA_;
	}

	return nullptr;
}