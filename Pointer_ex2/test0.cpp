#include<iostream>
using namespace std;

class Circle
{
private:
    /* data */
    int radius;
public:

    inline Circle(){radius =1;}
    inline Circle(int r){ radius=r;}
    void setRadius(int r){radius =r;}
    double getArea();
};

inline double Circle::getArea(){
    return 3.14*radius * radius;
}

int main(){
    Circle circleArray[3];
    circleArray[0].setRadius(10);
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    Circle *p;
    p = circleArray;

    for(int i=0;i<3;i++){
        cout<< "Circle" <<i<< "의 면적은" <<p->getArea()<<endl;
        p++;
    }
}