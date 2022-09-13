#include<iostream>
using namespace std;

#include"Power.h"

int main(){
    Power a(3, 5), b(4, 6), c;
    c = a+b;
    a.show();
    b.show();
    c.show();
}