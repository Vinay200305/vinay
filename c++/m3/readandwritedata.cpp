#include<iostream>
using namespace std;
class Person{
public:
	string name;
	int age;
	void writeData(){
		cout<<endl<<"Enter name : ";
		cin>>name;
		cout<<endl<<"Enter age : ";
		cin>>age;
	}
	
	void readData(){
		cout<<endl<<"Name : "<<name;
		cout<<endl<<"Age : "<<age;
	}
};

class Student : public Person{
public:
	float percentage;
	 void write1Data(){
        writeData();
        cout<<endl<< "Enter percentage : ";
        cin>>percentage;
    }

    void read1Data(){
        readData();
        cout<<endl<<"Percentage : "<<percentage;
    }
};

class Teacher : public Student{
public: 
	int salary;  
	void write_Data(){
        write1Data();
        cout<<endl<<"Enter salary : ";
        cin>>salary;
    }
    
	void read_Data(){
        read1Data();
        cout<<endl<<"Salary : "<<salary;
    }
};

int main(){
	 Teacher teacher;
	 teacher.write_Data();
	 teacher.read_Data();
	return 0;
}