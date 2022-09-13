#include<iostream>

using namespace std;
#include"Power.h"

Power::Power(int kick,int punch){
    this->kick=kick; this->punch=punch;
}

void Power::show(){
    cout<< "kick="<<kick <<','<<"punch="<<punch<<endl;
}

Power Power::operator+(Power op2){
    Power tmp;
    tmp.kick = this->kick + op2.kick;
    tmp.punch = this->punch + op2.punch;

    return tmp;
}