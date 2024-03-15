#include <iostream>
using namespace std;
class Student{
protected:
    int rollNumber;
public:
    void input_roll_number(){
        cout<<"Enter roll number : ";
        cin>>rollNumber;
    }
};

class Test : public Student{
protected:
    float subject1Marks;
    float subject2Marks;
public:
    void input_marks(){
        cout<<"Enter marks for subject 1 : ";
        cin>>subject1Marks;
        cout<<"Enter marks for subject 2 : ";
        cin>>subject2Marks;
    }
};

class Result : public Test{
private:
    float totalMarks;
public:
    void calculate_total_marks(){
        totalMarks = subject1Marks + subject2Marks;
    }

    void display_result(){
        cout<<"Roll Number : "<<rollNumber<<endl;
        cout<<"Subject 1 Marks : "<<subject1Marks<<endl;
        cout<<"Subject 2 Marks : "<<subject2Marks<<endl;
        cout<<"Total Marks : "<<totalMarks<<endl;
    }
};

int main(){
    Result result;
    result.input_roll_number();
    result.input_marks();

    result.calculate_total_marks();
    result.display_result();
    return 0;
}
