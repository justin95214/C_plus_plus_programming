#include<iostream>
#include<time.h>
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

inline double Circle::getArea(){
    cout<< "radius :"<< radius<<endl;
    return radius*radius*3.14;
};

int main(){

    double start, end;

    start = clock();

    Circle circle[2][3];
    circle[0][0].setRadius(1);
    circle[0][1].setRadius(2);
    circle[0][2].setRadius(3);

    circle[1][0].setRadius(4);
    circle[1][1].setRadius(5);
    circle[1][2].setRadius(6);

    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++){
            cout<< "Circle["<<i<<"]["<<j<<"] 면적은 "<<circle[i][j].getArea()<<endl;
    }

    end = clock();
    double result = (double)(end - start);
    cout << "take time :"<<result<<endl;


}