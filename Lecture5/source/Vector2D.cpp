#include "Vector2D.h"
#include <iostream>

Vector2D::Vector2D() :
      xVal(0.f)
    , yVal(0.f)
{

}
Vector2D::Vector2D(float x, float y) :
      xVal(x)
    , yVal(y)
{

}
Vector2D::Vector2D(const Vector2D &vec) :
      xVal(vec.xVal)
    , yVal(vec.yVal)
{

}
void Vector2D::Print()
{
    std::cout << "(" << xVal << ", " << yVal << ")" << std::endl;
}