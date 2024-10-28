#include "Enemy.h"
#include <iostream>

void (Enemy::* Enemy::table[])() = {
    &Enemy::Approach,
    &Enemy::Fire,
    &Enemy::Leave
};

void Enemy::Initialize()
{
    phase = table[0];
    isLeave_ = false;
}

void Enemy::Update()
{
    (this->*phase)();
}

void Enemy::Approach()
{
    std::cout << "敵 接近フェーズ" << std::endl;
    phase = table[1];
}

void Enemy::Fire()
{
    std::cout << "敵 射撃フェーズ" << std::endl;
    phase = table[2];

}

void Enemy::Leave()
{
    std::cout << "敵 離脱フェーズ" << std::endl;
    isLeave_ = true;
}
