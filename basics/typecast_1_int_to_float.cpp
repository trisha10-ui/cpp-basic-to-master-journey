//typecasting
//Write a Cpp program which take only integer as input and display half of the number.
//main part if we use even no the output will be whole no but if we take odd no it needs decimal
//so for decimal value we use typecast converts integer to the float
#include<iostream>
using namespace std;
int main(){
	int x;
	cout<<"Enter the value of x: ";
	cin>>x;
	float y=(float)x;
	cout<<y/2;
	return 0;
}
//Output: 
//Enter the value of x: 9   //ex 1
//4.5
//
//Enter the value of x: 155  //ex 2
//77.5
