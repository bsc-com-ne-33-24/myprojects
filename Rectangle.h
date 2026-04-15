#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
private:
    float length;
    float width;

public:
    Rectangle();                  // default constructor
    Rectangle(float l, float w);  // overloaded constructor
    ~Rectangle();                 // destructor

    void setLength(float l);
    void setWidth(float w);

    float getLength() const;
    float getWidth() const;

    float calculateArea() const;
};

#endif
