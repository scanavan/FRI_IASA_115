#ifndef VECTOR3D_H
#define VECTOR3D_H

class Vector3D
{
public:
    Vector3D();
    Vector3D(float x, float y, float z);
    Vector3D(const Vector3D &vec);

    void Print();

private:
    float xVal;
    float yVal;
    float zVal;
};
#endif