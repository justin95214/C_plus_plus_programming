#include<iostream>

using namespace std;
#include "Circle.h"

Circle::Circle(){
    radius = 5;
    cout<<"default constructer - radius : "<<radius<<endl;
};

Circle::Circle(int r){
    radius = r;
    cout<<"arguement constructer - radius : "<<radius<<endl;
};

Circle::~Circle(){
    cout<<"소멸자 실행 radius = "<<radius<<endl;
}

double Circle::getArea(){
    return 3.14 * radius* radius;
};

int Circle::getRadius(){
    return radius;
}

void Circle::setRadius(int radius){
    this->radius = radius;
}