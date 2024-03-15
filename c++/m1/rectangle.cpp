#include<iostream>
using namespace std;
class called
{
private:
    int length,width,ra,p,pi=3.14;
    public:
    int rectangles()
    {
        cout<<"enter length:";
        cin>>length;
        cout<<"enter width:";
        cin>>width;
        ra=length*width;
        cout<<"area of a rectangle ="<<ra;
    }
    int perimeter()
    {
        p=2*(pi*(ra));
        cout<<endl<<"perimeter ="<<p;
    }
};
int main(int argc, char const *argv[])
{
    called ca;
    ca.rectangles();
    ca.perimeter();
    return 0;
}