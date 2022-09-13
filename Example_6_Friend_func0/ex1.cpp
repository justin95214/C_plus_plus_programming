#include<iostream>
using namespace std;

//class Rect이 선언되기전에 eqauls함수에 사용되므로 class Rect; 문구로 선언함
class Rect;

class RectManager{
    public:
        bool equals(Rect r, Rect s);
        void copy(Rect& dest, Rect& src);
};



class Rect
{
private:
    int width, height;
public:
    Rect(int width, int height){this->width=width; this->height=height;};
    friend RectManager;
};

bool RectManager::equals(Rect r, Rect s){
    if(r.width==s.width && r.height == s.height)return true;
    else return false;
}

void RectManager::copy(Rect& dest, Rect& src){
    dest.width = src.width; dest.height=src.height;
}

int main(){
    Rect a(3, 4), b(4, 5);
    RectManager man;

    man.copy(b, a);

    if(man.equals(a, b)) cout<< "equals"<<endl;
    else cout<< "not equals"<<endl;
}