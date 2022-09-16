#ifndef COLORPOINT_H
#define COLORPOINT_H
#include<iostream>
#include<string>

using namespace std;
#include"Point.h"

class ColorPoint:public Point
{
private:
    string color;
public:
    ColorPoint();
    ~ColorPoint();
    ColorPoint(ColorPoint& p);

    void setColor(string color){ this->color =color;}
    void showColorPoint();
};

ColorPoint::ColorPoint(/* args */)
{
    cout<<"ColorPoint default constructer"<<endl;
}

ColorPoint::~ColorPoint()
{
    cout<<"ColorPoint default destructer"<<endl;
}


ColorPoint::ColorPoint(ColorPoint& p){
    this->color = p.color;
    //strcpy(this->color, p.color);
    this->x =p.x;
    this->y =p.y;
    cout << "복사 생성자 실행. 원복 객체의 이름"<<this->color<<"x : "<<x<<"y : "<<y<<endl;

}

void ColorPoint::showColorPoint(){
    cout<< color <<':';
    showPoint();
}




#endif