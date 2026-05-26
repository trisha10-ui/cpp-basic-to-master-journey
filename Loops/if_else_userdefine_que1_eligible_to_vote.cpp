//if-else example 1
//Write a cpp program to check that is eligible or not
#include<iostream>
using namespace std;
int main(){
	int age;
	cout<<"Enter the age: ";
	cin>>age;
	if(age>=18)
	{
		cout<<"You r eligible to vote";
	}
	else
	{
		cout<<"Not eligible to vote";
	}
} 

////output 1: Enter the age: 20
//You r eligible to vote
//
////output 2:Enter the age: 14
//Not eligible to vote
