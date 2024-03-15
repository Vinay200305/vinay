#include<iostream>
using namespace std;
class Date{
	int day, month, year;

public:
	Date(int day1, int month1, int year1){
		this->day = day1;
		this->month = month1;
		this->year = year1;
	}
	
	void setDate(int day1, int month1, int year1){
		day = day1;
		month = month1;
		year = year1;
	}

	int getDay(){
		return day;
	}
	
	int getMonth(){
		return month;
	}
	
	int getYear(){
		return year;
	}
	
	bool validDate(){
		if(month < 1 || month > 12){
			return false;
		}
		if((month==4 || month==6 || month==9 || month==11) && (day>30)){
			return false;
		}
		if(month == 2){
			if((year%4==0 && year%100!=0) || (year%400==0)){
				if(day>29){
					return false;
				}
			}
			else{
				if(day>28){
					return false;
				}
			}
		}
		return true;
	}
};

int main(){
	int day, month, year;
	cout<<endl<<"Enter a day : ";
	cin>>day;
	cout<<endl<<"Enter a month : ";
	cin>>month;
	cout<<endl<<"Enter a year : ";
	cin>>year;
	
	Date date(day, month, year);
	if(date.validDate()){
		cout<<endl<<"Date is valid";
		cout<<endl;
		cout<<"Date : "<<date.getDay()<<"/"<<date.getMonth()<<"/"<<date.getYear();
	}
	else{
		cout<<endl<<"Please Enter valid Date";
	}
	return 0;
}