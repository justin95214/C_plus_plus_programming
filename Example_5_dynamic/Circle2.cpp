#include<iostream>

using namespace std;
#include "Circle2.h"

Circle2::Circle2(){
    radius = 5;
    cout<<"default constructer - radius : "<<radius<<endl;
};

Circle2::Circle2(int r){
    radius = r;
    cout<<"arguement constructer - radius : "<<radius<<endl;
};

Circle2::~Circle2(){
    cout<<"소멸자 - radius :"<<radius<<endl;
}

double Circle2::getArea(){
    return 3.14 * radius* radius;
};