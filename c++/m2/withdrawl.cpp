#include<iostream>
using namespace std;
class called
{
private:
   int ac,bl,w;
public:
    int di()
    {
        cout<<"enter your account number:";
        cin>>ac;
        cout<<"enter deposit amunt:";
        cin>>bl;
    }
    int wi()
    {
        cout<<"your account number :"<<ac;
        cout<<endl<<"enter withdraw amount:";
        cin>>w;
        bl=bl-w;
        cout<<"ammount left after withdrawl:"<<bl;
    }
};
int main(int argc, char const *argv[])
{
    called ca;
    ca.di();
    ca.wi();
    return 0;
}