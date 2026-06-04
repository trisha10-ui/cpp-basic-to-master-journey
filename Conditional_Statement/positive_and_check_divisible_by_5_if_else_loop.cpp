//Write a cpp program to take positve integer number as input and check wheather it is divisible by 5 or not.
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter num: ";
	cin>>num;
	if(num>=0 && num/5)
	cout<<"Number is positive and divisible by 5";
	else if(num<=0 && num!=5)
	cout<<"Number is negitive and not divisible by 5";
	else
	cout<<"Number is positive Not divisible by 5";
}
