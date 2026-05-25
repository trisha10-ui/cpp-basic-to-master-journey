//Practice Problems
//Hierachy of operators 
//Que 4 : Write a cpp program which have predefine expression int a=7/22*(3.14+2)*3/5; which evaluates to..
#include<iostream>
using namespace std;
int main(){
	int a=7/22*(3.14+2)*3/5;
	cout<<"The value of a is: ";
	cout<<a<<endl;
	
	float b=7.0/22.0*(3.14+2)*3/5;  //changed to b because a is already declared but in reality it is a 
	cout<<"The value of b is: ";
	cout<<b;
}

//Output: The value of a is: The value of a is: 0  
//this based on data type as we used int it gives 0 
//Output: The value of b is: The value of b is: 0.981273 
//we used float it gives 0.981273 
