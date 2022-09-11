#include<iostream>
using namespace std;

#include"Circle2.h"

int main(){

    Circle2 *p= new Circle2[5];

    if(!p){
        cout<<"failed the allocated memory"<<endl;
        return 0;
    }

    for(int i=0;i<5;i++){
        p[i] = Circle2(10*(i+1));
    }

    //*p = Circle(10);
    //Circle n = *p;
    for(int i=0;i<5;i++){
        cout<< p[i].getArea()<<endl;
    }

    delete [] p;

}
