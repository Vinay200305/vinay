//Write a program to Mathematic operation like Addition, Subtraction,
//Multiplication, Division Of two number using different parameters and
//Function Overloading
#include <iostream>
using namespace std;

// Function to perform addition
int mathsOperation(int a, int b){
    return a + b;
}

// Function to perform division
float mathsOperation(float a, float b){
    if(b != 0){
    	return a / b;
	}
	else{
		return 0;
	}
}

// Function to perform subtraction
int mathsOperation(int a, int b, int c){
    return a - b - c;
}

// Function to perform multiplication
int mathsOperation(int a, int b, int c, int d){
    return a * b * c * d;
}

int main(){
    int result;
    float result1;

    result = mathsOperation(12, 15);
    cout<<"Addition : "<<result<<endl;
	
    result1 = mathsOperation(10.0f, 5.0f);
    cout<<"Division : "<<result1<<endl;
    
    result = mathsOperation(20, 51, 83);
    cout<<"Subtraction : "<<result<<endl;

    result = mathsOperation(12, 63, 74, 8);
    cout<<"Multiplication : "<<result<<endl;
    return 0;
}
