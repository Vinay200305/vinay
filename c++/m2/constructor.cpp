#include<iostream>
using namespace std;
class cal
{
public:
    int no1,no2;
    char c;
    public:
    cal()
    {
        cout<<"enter number:";
        cin>>no1>>no2;
        cout<<"choyes any one +,-,*,/:";
        cin>>c;
        switch (c)
        {
        case '+':
            cout<<"Addition:"<<no1+no2;
            break;
        case '-':

            cout<<"Subtraction:"<<no1-no2;
            break;
        case '/':
            cout<<"Division:"<<no1/no2;
            break;
        case '*':
            cout<<"Multiplication:"<<no1*no2;
            break;
        default:
            cout<<"enter valid input!!";
            break;
        }
    }
};
int main(int argc, char const *argv[])
{
    cal ca;
    return 0;
}