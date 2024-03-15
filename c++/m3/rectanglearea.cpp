#include<iostream>
using namespace std;
class recarea{
public:
	virtual int calculateArea(){
		return 0;
	}
};

class Rectangle : public recarea{
	int length, width;
public:
	Rectangle(int length1, int width1) : length(length1), width(width1){}
	int calculateArea(){
		return length * width;
	}
};

int main(){
	int length, width;
	cout<<endl<<"Enter length : ";
	cin>>length;
	cout<<endl<<"Enter width : ";
	cin>>width;
	Rectangle rectangle(length, width);
	cout<<endl<<"Area of Rectangle : "<<rectangle.calculateArea();
	return 0;
}