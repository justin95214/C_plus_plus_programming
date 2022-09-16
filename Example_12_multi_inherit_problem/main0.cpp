#include<iostream>
#include<string>

using namespace std;

class BaseIO
{

public:
    int mode;
    BaseIO();
    ~BaseIO();
};

BaseIO::BaseIO()
{
    cout<<"Parents Class Default constructer"<<endl;
}

BaseIO::~BaseIO()
{
    cout<<"Parents Class Default destructer"<<endl;
}

class In : virtual public BaseIO
{
public:
    int ReadPos;
    In(/* args */);
    ~In();
};

In::In(/* args */)
{
    cout<<"Child Class - In Default constructer"<<endl;
}

In::~In()
{
    cout<<"Child Class - In Default destructer"<<endl;
}

class Out
{

public:
    int writePos;
    Out(/* args */);
    ~Out();
};

Out::Out(/* args */)
{
    cout<<"Child Class - Out Default constructer"<<endl;
}

Out::~Out()
{
    cout<<"Child Class - Out Default destructer"<<endl;
}

class InOut :public In, public Out
{
public:
    bool safe;
    InOut(/* args */);
    ~InOut();
};

InOut::InOut(/* args */)
{
    cout<<"Child Class - InOut Default constructer"<<endl;
}

InOut::~InOut()
{
    cout<<"Child Class - InOut Default destructer"<<endl;
}


int main(){
    InOut ioOBJ;
    ioOBJ.ReadPos = 10;
    ioOBJ.writePos = 20;
    ioOBJ.safe = true;
    ioOBJ.mode = 5;


    cout<<"("<<ioOBJ.ReadPos<<" ,"<< ioOBJ.writePos<<" ,"<<ioOBJ.safe<<" ,"<<ioOBJ.mode<<" )"<<endl;

}