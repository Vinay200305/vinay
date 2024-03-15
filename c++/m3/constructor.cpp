#include <iostream>
using namespace std;
class A{
public:
    A(){
        cout<<"Constructor of class A"<<endl;
    }
};

class B : public A{
public:
    B(){
        cout<<"Constructor of class B"<<endl;
    }
};

class C : public B{
public:
    C(){
        cout<<"Constructor of class C"<<endl;
    }
};

int main(){
    C objC;
    return 0;
}

