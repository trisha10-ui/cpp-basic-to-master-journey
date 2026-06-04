//if-else-if loop
//Write a cpp program which takes userinput to print a grade of student using if-else-if statement
#include<iostream>
using namespace std;
int main(){
	int marks;
	cout<<"Enter the Student marks: ";
	cin>>marks;
	if(marks<0 || marks>100)
	cout<<"Wrong Marks";
	else if(marks>=0 && marks<50)
	cout<<"Fail";
	else if(marks>=50 && marks<60)
	cout<<"Grade D";
	else if(marks>=60 && marks<70)
	cout<<"Grade C";
	else if(marks>70 && marks<80)
	cout<<"Grade B";
	else if(marks>80 && marks<90)
	cout<<"Grade A";
	else if(marks>=90 && marks<=100)
	cout<<"Grade A+";
} 

////Output1 : Enter the Student marks:78
//Grade B
//
////Output2 : Enter the Student marks: 98
//Grade A+
//
////Output3: Enter the Student marks: 4
//Fail
//
////Output4 : Enter the Student marks: -15
//Wrong Marks
//
////output5: Enter the Student marks: 120
//Wrong Marks

