#ifndef LINE_2D_H
#define LINE_2D_H
#include "Vector2D.h"
#include <iostream>

class Line2D
{
public:
    Line2D(Vector2D startVec, Vector2D endVec);
    void Print();
private:
    friend std::ostream& operator<<(std::ostream& os, const Line2D& line);
    Vector2D start;
    Vector2D end;
};
#endif