#include<iostream>
using namespace std;
class Employee{
	string name;
	int employee id;
	float salary;
public:
	Employee(string enm, int id, float sal){
		name = enm;
		employee id = id;
		salary = sal;
	}
	
	void setPer_Salary(int eperformance){
		if(eperformance>=0.0){
			salary *= eperformance;
			cout<<endl<<"Employee performance salary : "<<salary;
		}
		else{
			cout<<endl<<"Invalid performance";
		}
	}
	
	int getSalary(){
		return salary;
	}
	
	void disp(){
		cout<<endl<<"Employee Id : "<<eid;
		cout<<endl<<"Employee Name : "<<name;
		cout<<endl<<"EMployee Salary : "<<salary;
	}
};
int main(){
	string nm1;
	int id, sal, psal;
	cout<<endl<<"Enter employee Id : ";
	cin>>id;
	cout<<endl<<"Enter employee Name : ";
	cin>>nm1;
	cout<<endl<<"Enter employee Salary : ";
	cin>>sal;
	Employee emp(nm1, id, sal);
	
	cout<<endl<<"Enter employee performance base salary : ";
	cin>>psal;
	emp.setPer_Salary(psal);
	emp.disp();
	return 0;
}