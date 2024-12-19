#include "Command.h"

#include "Player.h"

void MoveRightCommand::Execute(Player& _player)
{
    _player.MoveRight();
}

void MoveLeftCommand::Execute(Player& _player)
{
    _player.MoveLeft();
}
