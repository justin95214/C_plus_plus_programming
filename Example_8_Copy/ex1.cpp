#include<iostream>
using namespace std;

#include"Circle.h"

Circle* increase(Circle* c){
    int r = c->getRadius();
    c->setRadius(r+1);
    return c;
}

int main(){
    Circle waffle(30);
    Circle *increase_Circle;
    increase_Circle = increase(&waffle);
    cout<< "Before : "<<waffle.getArea()<<endl;
    cout<< "After : "<<increase_Circle->getArea()<<endl;

}