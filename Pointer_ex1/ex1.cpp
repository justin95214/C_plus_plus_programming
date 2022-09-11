#include<iostream>
using namespace std;

#include"Circle.h"

Circle donut;
double d = donut.getArea();



int main(){
    Circle *p;
    p= &donut;
    double w = p->getArea(); 
    double ww = (*p).getArea();
    cout<<w<<' '<<ww<<endl;
};