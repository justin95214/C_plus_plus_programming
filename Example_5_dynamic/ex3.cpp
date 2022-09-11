#include<iostream>
using namespace std;

#include"Circle.h"

int main(){

    Circle *p= new Circle[5];

    if(!p){
        cout<<"failed the allocated memory"<<endl;
        return 0;
    }

    for(int i=0;i<5;i++){
        p[i] = Circle(10*(i+1));
    }

    //*p = Circle(10);
    //Circle n = *p;
    for(int i=0;i<5;i++){
        cout<< p[i].getArea()<<endl;
    }

    delete [] p;

}
