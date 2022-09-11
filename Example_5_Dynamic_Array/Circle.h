#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
    {
    private:
        /* data */
        int radius;
    public:
        Circle();
        Circle(int r);
        ~Circle();
        double getArea();
        void setRadius(int r=100);
    };

#endif