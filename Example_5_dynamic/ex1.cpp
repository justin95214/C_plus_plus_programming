#include<iostream>
using namespace std;

#include"Circle.h"

int main(){

    Circle *p= new Circle;

    if(!p){
        cout<<"failed the allocated memory"<<endl;
        return 0;
    }

    *p = Circle(10);
    //Circle n = *p;

    cout<< p->getArea()<<endl;
    delete p;

}
