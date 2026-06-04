//use of ternary operator
//Write a program to tell that num is even or odd using ternary operator
//(condition)?if true: if flase;
#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter the num value: "<<endl;
	cin>>num;
	(num%2==0)?cout<<"Even":cout<<"odd";
}
