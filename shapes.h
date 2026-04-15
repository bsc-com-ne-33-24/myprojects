#ifndef SHAPES_H
#define SHAPES_H

#include <iostream>
using namespace std;


namespace shapes{

    class Square{
         
        private: 
        float side_length;

        ~Square();
        Square();
        void setSqLength();
        void getSqLength();
    };

    class Triangle{
        private:
        float base;
        float Hieght;

        public:
        ~Triangle();
        Triangle();

        void SetBase();
        void getBase();

    };


    class Circle{
        private:
            float radius;

        public:
            ~Circle();
            Circle();

            void setRadius();
            float getRadius();
    };

    class Area{
        private:
            
    }
};

#endif