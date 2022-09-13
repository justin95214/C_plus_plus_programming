
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
        int getRadius();
        void setRadius(int radius);
    };

#endif