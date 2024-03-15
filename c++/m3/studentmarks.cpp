#include<iostream>
using namespace std;
class StudentInfo{
public:
    string name;
    int rollNumber;
    void inputInfo(){
        cout<<endl<<"Enter student name : ";
        cin>>name;
        cout<<endl<<"Enter roll number : ";
        cin>>rollNumber;
    }

    void displayInfo(){
        cout<<endl<<"Student Name : "<<name;
        cout<<endl<<"Roll Number : "<<rollNumber;
    }
};

class Marks{
public:
    float mark1, mark2, mark3;
	int total;
    void inputMarks(){
        cout<<endl<<"Enter marks for subject 1 : ";
        cin>>mark1;
        cout<<endl<<"Enter marks for subject 2 : ";
        cin>>mark2;
        cout<<endl<<"Enter marks for subject 3 : ";
        cin>>mark3;
    }

    void displayMarks(){
        cout<<endl<<"Subject 1 : "<< mark1;
        cout<<endl<<"Subject 2 : "<< mark2;
        cout<<endl<<"Subject 3 : "<< mark3;
    }
    
    void totalMarks(){
    	total = mark1+mark2+mark3;
    	cout<<endl<<"Total : "<<total;
	}
};

class StudentMarkSheet : public StudentInfo, public Marks{
public:
    void inputStudentMarkSheet(){
        inputInfo();
        inputMarks();
    }

    void displayStudentMarkSheet(){
        displayInfo();
        displayMarks();
        totalMarks();
    }
};

int main() {
    StudentMarkSheet student;

    cout<<endl<<"----------Enter student information and marks----------";
    student.inputStudentMarkSheet();
    cout<<endl<<"----------Student Mark Sheet----------";
    student.displayStudentMarkSheet();
    return 0;
}