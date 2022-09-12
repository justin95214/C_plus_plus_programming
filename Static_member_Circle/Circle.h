#ifndef CIRCLE_H
#define CIRCLE_H

class Circle
{
private:
    /* data */
    int radius;
    static int numOfCircles;
public:
    Circle(int r=1);
    ~Circle();
    double getArea();
    static int getNumOfCircles();
};

#endif