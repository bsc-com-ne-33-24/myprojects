#ifndef SQUARE_H
#define SQUARE_H

namespace shapes {
    class Square {
    private:
        float side;
    public:
        Square();
        Square(float s);
        ~Square();

        void setSide(float s);
        float getSide() const;
    };
}
#endif
