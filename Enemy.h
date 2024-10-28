#pragma once

class Enemy
{
public:
    void Initialize();
    void Update();
    void Draw();

    bool IsLeave() { return isLeave_; }

private:
    void Approach();
    void Fire();
    void Leave();

    void (Enemy::*phase)();
    static void (Enemy::*table[])();

    bool isLeave_;
};