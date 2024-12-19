#pragma once
#include "BaseScene.h"

#include "App/Player.h"
#include "App/InputHandler.h"
#include "App/Command.h"

#include <memory>

class SampleScene : public BaseScene
{
public:

    static std::unique_ptr<BaseScene> Create();

     ~SampleScene() override;

    void Initialize() override;
    void Update() override;
    void Draw() override;

private:

    std::unique_ptr<InputHandler> pInputHandler_;
    ICommand* pICommand_;

    std::unique_ptr<Player> pPlayer_;


#ifdef _DEBUG
    void ImGui();
#endif // _DEBUG
};
