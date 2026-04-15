#include "Area.h"
#include <cmath>

float Area::calculateSquareArea(const shapes::Square &s) {
    return s.getSide() * s.getSide();
}

float Area::calculateTriangleArea(const shapes::Triangle &t) {
    return 0.5f * t.getBase() * t.getHeight();
}

float Area::calculateCircleArea(const shapes::Circle &c) {
    return M_PI * c.getRadius() * c.getRadius();
}
