#pragma once

#include "IShape.h"

class Circle : public IShape
{
public:

    void Size() override;
    void Draw() override;

    void SetRadius(float r) { radius = r; }

private:

    float radius;

};