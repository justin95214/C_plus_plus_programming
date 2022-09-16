#include<iostream>
using namespace std;

class Shape
{
public:
    virtual void draw(){cout<<"Paint"<<endl;}
};

class Rect : public Shape
{
public:
    virtual void draw(){cout<<"Rect"<<endl;}
};

class Line : public Shape
{
public:
    virtual void draw(){cout<<"Line"<<endl;}
};

class Circle : public Shape
{
public:
    virtual void draw(){cout<<"Circle"<<endl;}
};

void paint(Shape* p){
    p->draw();
};

int main(){
paint(new Circle());
paint(new Rect());
paint(new Line());
}