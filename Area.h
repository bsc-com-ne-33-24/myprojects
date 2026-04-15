#ifndef AREA_H
#define AREA_H
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"

class Area {
public:
    float calculateSquareArea(const shapes::Square &s);
    float calculateTriangleArea(const shapes::Triangle &t);
    float calculateCircleArea(const shapes::Circle &c);
};
#endif
