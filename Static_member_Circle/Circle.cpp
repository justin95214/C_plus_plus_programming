#include<iostream>

using namespace std;

#include"Circle.h"


Circle::Circle(int r){
    radius = r;
    numOfCircles++;
}

Circle::~Circle(){
    numOfCircles--;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int Circle::getNumOfCircles(){
    return numOfCircles;
}

int Circle::numOfCircles = 0;