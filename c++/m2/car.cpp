#include<iostream>
using namespace std;
class car
{
private:
    string company,model;
    int year;
public:
    int get()
    {
        cout<<"enter car company name:";
        cin>>company;
        cout<<"enter car model:";
        cin>>model;
        cout<<"enter car year";
        cin>>year;
    }
    int set()
    {
        cout<<endl<<"your car company name:"<<company;
        cout<<endl<<"your car model:"<<model;
        cout<<endl<<"your car registration year:"<<year;

    }
};
int main(int argc, char const *argv[])
{
    car ca;
    ca.get();
    ca.set();
    return 0;
}
