#include "Line2D.h"
#include <iostream>

Line2D::Line2D(Vector2D startVec, Vector2D endVec) :
      start(startVec)
    , end(endVec)
{

}
void Line2D::Print()
{
    std::cout << "----------" << std::endl;
    start.Print();
    end.Print();
    std::cout << "----------" << std::endl;
}
std::ostream& operator<<(std::ostream& os, const Line2D& line)
{
    os << "We overloaded the << operator.";
    return os;
}