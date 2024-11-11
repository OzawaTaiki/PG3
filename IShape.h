#pragma once

class IShape
{
private:

    virtual void Size() = 0;
    virtual void Draw() = 0;

protected:
    float space_ = 0;
};