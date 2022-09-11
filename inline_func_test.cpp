#include<iostream>
#include<string>
#include<time.h>

using namespace std;

/*
맥북프로 2019년 13인치 기준으로 inline함수사용시와 비교시 37s와 47s로 차이가 남
*/

class Circle{
    public:
        int radius;
        Circle();
        Circle(int r);
        double getArea();

};

inline Circle::Circle(){
    radius = 5;
    cout<<"default constructer / radius : "<< radius<<endl;
};

inline Circle::Circle(int r){
    radius =r;
    cout<<"arguement constructer / radius : "<< radius<<endl;
};

inline double Circle::getArea(){
    return 3.14*radius*radius;
};

int main(){
    clock_t start, end;
    double result;


    start = clock();
    Circle circle(7);
    double big_size = circle.getArea();
    cout << "big_size : "<< big_size<<endl;
    end = clock();
    result = (double)(end - start);
    cout << "take the time : "<<result <<endl;

}