#pragma once

#include <Rendering/Sprite/Sprite.h>
#include <Physics/Math/Vector2.h>


class Player
{
public:
    Player() = default;
    ~Player() = default;

    void Initialize();
    void Update();
    void Draw();


    void MoveRight();
    void MoveLeft();

private:

    std::unique_ptr<Sprite> pSprite_;

    Vector2 position_;
    float speed_;

};
