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
        double getArea();
    };

#endif