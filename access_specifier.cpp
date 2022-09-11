#include<iostream>
#include<string>

using namespace std;

class Sample{
    private:
        int angle;

    public:
        int r;
        Sample();
        Sample(int r);
        double getArea();

};

Sample::Sample(){
    r = 1;
    angle = 7;
    cout<<"디폴트 생성자 "<< "angle은 "<<angle<<endl;
};

Sample::Sample(int R){
    r= R;
    angle = 7;
    cout<<"R인수가 있는 디폴드 생성자"<<"angle은 "<<angle<<endl;
}


double Sample::getArea(){
    return 3.14*r*r;
};


int main(){
    Sample sample_test(5);
    double a = sample_test.getArea();
    string b = " 샘플의 면적은 ";
    cout << b+" 다음과 같다 :"<<a;
}