#include<cmath>
#include "Exp.h"


Exp::Exp(int a_v, int b_v)
{
    a = a_v;
    b = b_v;
};

Exp::Exp(int c_v)
{
    a = c_v;
};

Exp::Exp()
{
    a = 1;
};

int Exp::getValue(){
    return pow(a, b);
}

int Exp::getBase(){
    return a;
}

int Exp::getExp(){
    return b;
}

bool Exp::equals(Exp O){
    if (O.getValue())
        return true;
    else
        return false;
}