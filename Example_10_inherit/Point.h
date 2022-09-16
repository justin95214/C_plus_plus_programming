#ifndef POINT_H
#define POINT_H

#include<iostream>

using namespace std;

class Point
{
protected:
    int x, y;
public:
    Point(/* args */);
    ~Point();
    void set(int x, int y){this->x=x; this->y=y;}
    void showPoint(){
        cout<<"("<<x<<","<<y<<")"<<endl;
    }
    
};

Point::Point()
{
    cout<<"Point default constructer"<<endl;
}

Point::~Point()
{
    cout<<"Point default destructer"<<endl;
}

#endif