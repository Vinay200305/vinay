#include<iostream>
using namespace std;
class calc
{
    int a,b,c;
public:
    calc()
    {
        cout<<"enter number :- ";
        cin>>a>>b;
        cout<<"choose an option 1. add 2. sub 3. mul 4. div :- ";
        cin>>c;
        switch (c)
        {
        case 1:
            cout<<" sum= "<<a+b;
            break;
        case 2:
            cout<<" sub= "<<a-b;
        case 3:
            cout<<" mul= "<<a*b;
        case 4:
            cout<<" div= "<<a/b;
        default:
            cout<<"choose valid option";
            break;
        }
    }
};
int main()
{
    calc c;
    return 0;
}
