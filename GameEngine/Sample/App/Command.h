#pragma once

class Player;

class ICommand
{
public:
    virtual ~ICommand() = default;
    virtual void Execute(Player& _player) = 0;
};


class MoveRightCommand : public ICommand
{
public:
    void Execute(Player& _player) override;
};

class MoveLeftCommand : public ICommand
{
public:
    void Execute(Player& _player) override;
};
