#include "SampleScene.h"

#include "SceneManager.h"
#include <ResourceManagement/TextureManager/TextureManager.h>

std::unique_ptr<BaseScene>SampleScene::Create()
{
    return std::make_unique<SampleScene>();
}

SampleScene::~SampleScene()
{
}

void SampleScene::Initialize()
{
    pPlayer_ = std::make_unique<Player>();
    pPlayer_->Initialize();

    pInputHandler_ = std::make_unique<InputHandler>();
    pInputHandler_->AssignMoveLeftCommand2PressKeyA();
    pInputHandler_->AssignMoveRightCommand2PressKeyD();
}

void SampleScene::Update()
{
    pICommand_ = pInputHandler_->HandleInput();

    if (pICommand_ != nullptr)
    {
        pICommand_->Execute(*pPlayer_);
    }

    pPlayer_->Update();

}

void SampleScene::Draw()
{

    Sprite::PreDraw();
    pPlayer_->Draw();
}

#ifdef _DEBUG
#include <imgui.h>
void SampleScene::ImGui()
{

}
#endif // _DEBUG
