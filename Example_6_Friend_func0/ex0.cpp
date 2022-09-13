#include<iostream>
using namespace std;

//class Rect이 선언되기전에 eqauls함수에 사용되므로 class Rect; 문구로 선언함
class Rect;
bool equals(Rect r, Rect s);

class Rect
{
private:
    int width, height;
public:
    Rect(int width, int height){this->width=width; this->height=height;};
    friend bool equals(Rect r, Rect s);
};

bool equals(Rect r, Rect s){
    if(r.width==s.width && r.height == s.height)return true;
    else return false;
}

int main(){
    Rect a(3, 4), b(4, 5);
    if(equals(a, b)) cout<< "equals"<<endl;
    else cout<< "not equals"<<endl;
}