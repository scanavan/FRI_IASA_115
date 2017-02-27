#include "Vector3D.h"
#include <iostream>

Vector3D::Vector3D() :
      xVal(0.f)
    , yVal(0.f)
    , zVal(0.f)
{

}
Vector3D::Vector3D(float x, float y, float z) :
      xVal(x)
    , yVal(y)
    , zVal(z)
{

}
Vector3D::Vector3D(const Vector3D &vec) :
      xVal(vec.xVal)
    , yVal(vec.yVal)
    , zVal(vec.zVal)
{
  
}
void Vector3D::Print()
{
    std::cout << "(" << xVal << ", " << yVal << ", " << zVal << ")" << std::endl;
}