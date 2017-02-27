#ifndef VECTOR2D_H
#define VECTOR2D_H

class Vector2D
{
public:
    Vector2D();
    Vector2D(float x, float y);
    Vector2D(const Vector2D &vec);

    void Print();

private:
    float xVal;
    float yVal;
};
#endif