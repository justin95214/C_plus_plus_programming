#include<iostream>
using namespace std;

#include"Person.h"

int Person::sharedMoney=10;

int main(){
    Person han;
    han.money=100;
    han.sharedMoney=200;


    Person lee;
    lee.money=150;
    lee.addMoney(100);
    lee.addShared(200);


    cout << han.money<<" "<<lee.money<<endl;
    cout << han.sharedMoney<< " "<< lee.sharedMoney<<endl; 
}