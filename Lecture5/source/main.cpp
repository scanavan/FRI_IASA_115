#include "Vector2D.h"
#include "Vector3D.h"
#include "Line2D.h"
#include <iostream>

int main()
{
    Vector2D vec2dZero;
    Vector2D vec2dNonZero(3.4f, 4.5f);
    Vector2D vec2dCopy(vec2dNonZero);

    Vector3D vec3dZero;
    Vector3D vec3dNonZero(2.3f, 5.f, 1.1f);
    Vector3D vec3dCopy(vec3dNonZero);
    
    vec2dZero.Print();
    vec2dNonZero.Print();
    vec2dCopy.Print();
	
    vec3dZero.Print();
    vec3dNonZero.Print();
    vec3dCopy.Print();

	Line2D line2(vec2dZero, vec2dCopy);

    Line2D* line = new Line2D(vec2dZero, vec2dCopy);
    line->Print();
    std::cout << line << " " << *line << std::endl;

    delete line;

    return 0;
}