#include"Point.h"
#include"ColorPoint.h"



int main(){

    Point p;
    ColorPoint cp;
    cp.set(3, 4);
    cp.setColor("Red");
    cp.showColorPoint();

    ColorPoint cp1(cp);
    cp1.setColor("Blue");
    cp1.showColorPoint();
}