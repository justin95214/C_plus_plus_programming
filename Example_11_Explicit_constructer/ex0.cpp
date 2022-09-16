#include<iostream>

using namespace std;

class A{
public:
    A(/* args */){ cout<<"생성자 A "<<endl;}
    A(int x){ 
    cout<<"매개변수 생성자 A"<<endl;
    cout<<x<<endl;}
};

class B : public A{
public:
    B(/* args */){cout <<"생성자 B"<<endl;}
    B(int x) : A(x+3){
        cout<<"매개변수 생성자 B"<<endl;
        cout<<x<<endl;}
};

int main(){
    B b(5);
}

