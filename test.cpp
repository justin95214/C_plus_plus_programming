#include<iostream>

double area(int r);
double area(int r){
        return 3.14*r*r;
}

int main(){
        int n =3;
        char c='a';
        std::cout << c<< 5.5 <<'-'<<n<<'hello'<<true<<std::endl;
        std::cout <<"면적은"<<area(n);
        }


