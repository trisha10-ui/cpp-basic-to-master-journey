//Number classificatio using if-else-ladder
//Write a cpp program to check wheather the number is positive negative or zero
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a Number: ";
	cin>>num;
	if(num<=-1)
	cout<<"Number is negative";
	else if(num==0)
	cout<<"Number is zero";
	else if(num>=0)
	cout<<"Number is positive";
}
