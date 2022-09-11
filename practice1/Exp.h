#ifndef EXP_H
#define EXP_H

class Exp
{
    private:
        int a, b;

    public:
        Exp(int a_v, int b_v);
        Exp(int c_v);
        Exp();
        int getValue();
        int getBase();
        int getExp();
        bool equals(Exp A);
};

#endif