#pragma once

#include "IShape.h"

class Rectangle : public IShape
{
public:

    void Size() override;
    void Draw() override;

    void SetWidth(float w) { width = w; }
    void SetHeight(float h) { height = h; }

private:
    float width;
    float height;

};
