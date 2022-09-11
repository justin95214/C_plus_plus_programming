#include<iostream>


using namespace std;

#include"Circle.h"

int main(){
    Circle *pArray = new Circle[5];

    for(int i=0;i<4;i++){
        pArray[i].setRadius((i*5));
    }
    
    pArray[4].setRadius();

    
    cout << sizeof(pArray) <<' '<<sizeof(pArray[0])<<' '<<sizeof(Circle) <<endl;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"pArray["<<i<<"] :"<< pArray[i].getArea()<<endl;
    }
    
    delete [] pArray;
}