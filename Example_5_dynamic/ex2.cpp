#include<iostream>
using namespace std;

#include"Circle.h"

int main(){

    Circle *p= new Circle(15);

    if(!p){
        cout<<"failed the allocated memory"<<endl;
        return 0;
    }

    Circle n = *p;
    //*p = Circle(10);
    //Circle n = *p;

    cout<< p->getArea()<<endl;
    cout<< n.getArea()<<endl;
    delete p;

}
