#include "Player.h"

#include <ResourceManagement/TextureManager/TextureManager.h>

void Player::Initialize()
{
    uint32_t handle = TextureManager::GetInstance()->Load("white.png");
    pSprite_ = std::make_unique<Sprite>();
    pSprite_->Initialize();
    pSprite_->SetTextureHandle(handle);
    pSprite_->SetAnchor({ 0.5f,0.5f});
    pSprite_->SetSize({ 100,100 });

    pSprite_->translate_ = { 640,360 };


    speed_ = 7.0f;
}

void Player::Update()
{

}

void Player::Draw()
{
    pSprite_->Draw();
}

void Player::MoveRight()
{
    pSprite_->translate_.x += speed_;
}

void Player::MoveLeft()
{
    pSprite_->translate_.x -= speed_;
}
