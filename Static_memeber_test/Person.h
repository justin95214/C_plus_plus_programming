#ifndef PERSON_H
#define PERSON_H

class Person
{

public:
    double money;
    void addMoney(int money){this->money+=money;}

    static int sharedMoney;
    static void addShared(int n){sharedMoney+=n;}
};



#endif