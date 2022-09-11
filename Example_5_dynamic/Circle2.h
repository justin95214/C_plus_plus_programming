#ifndef CIRCLE2_H
#define CIRCLE2_H

class Circle2
    {
    private:
        /* data */
        int radius;
    public:
        Circle2();
        Circle2(int r); 
        ~Circle2();
        double getArea();
    };

#endif