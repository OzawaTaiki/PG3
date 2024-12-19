#include "InputHandler.h"
#include <Systems/Input/Input.h>

ICommand* InputHandler::HandleInput()
{
    if (Input::GetInstance()->IsKeyPressed(DIK_A))
    {
        return pressKeyA_;
    }
    else if (Input::GetInstance()->IsKeyPressed(DIK_D))
    {
        return pressKeyD_;
    }

    return nullptr;
}

void InputHandler::AssignMoveLeftCommand2PressKeyA()
{
    ICommand* command = new MoveLeftCommand();
    pressKeyA_ = command;
}

void InputHandler::AssignMoveRightCommand2PressKeyD()
{
    ICommand* command = new MoveRightCommand();
    pressKeyD_ = command;
}
