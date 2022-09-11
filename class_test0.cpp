#include<iostream>
#include<string>

using namespace std;

class Circle{
    public:
        int radius;
        double getArea();
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    donut.radius = 1;
    double area = donut.getArea();

    cout << "원의 면적은 " << area<<endl;

}

