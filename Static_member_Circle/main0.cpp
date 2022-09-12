#include<iostream>
using namespace std;
#include"Circle.h"



int main(){

    Circle *p = new Circle[10];
    cout<<"생존 하고 있는 원의 개수"<<Circle::getNumOfCircles()<<endl;

    Circle A;
    cout<<"생존 하고 있는 원의 개수"<<Circle::getNumOfCircles()<<endl;

    delete [] p;
    cout<<"생존 하고 있는 원의 개수"<<Circle::getNumOfCircles()<<endl;

    Circle a;
    cout<<"생존 하고 있는 원의 개수"<<Circle::getNumOfCircles()<<endl;

    Circle b;
    cout<<"생존 하고 있는 원의 개수"<<Circle::getNumOfCircles()<<endl;

}