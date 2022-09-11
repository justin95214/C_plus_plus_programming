#include<iostream>

using namespace std;

void filling(int n =25, char c='*'){
    for (int i = 0; i < n; i++)
        cout<<c;
    cout<<endl;
}

int main(){
    filling();
    filling(10, '%');
}