#ifndef ADDER_H
#define ADDER_H

class Adder
{
private:
    /* data */
    int op1, op2;
public:
    Adder(int a, int b);
    int process();
};

#endif
