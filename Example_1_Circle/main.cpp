#include<iostream>
#include "Circle.h"

using namespace std;




int main(){
    
    Circle donut;
    
    double area = donut.getArea();

    Circle pizza(10);
    double round = pizza.getArea();

    cout << "donut area"<<area<<endl;
    cout << "pizza area"<<round<<endl;
    
};