#include<iostream>
using namespace std;

class Circle
{
private:
    /* data */
    int radius;
public:
    Circle(){radius = 1;}
    Circle(int r){ radius = r;}
    void setRadius(int r){radius =r;}
    double getArea();
};

double Circle::getArea(){
    cout<< "radius :"<< radius<<endl;
    return radius*radius*3.14;
}

int main(){
Circle circleArray[3] = {Circle(10), Circle(20), Circle()};
for(int i=0; i <3;i++){
    cout<<"Circle "<<i<<" 와의 면적 "<<circleArray[i].getArea()<<endl;
}
}