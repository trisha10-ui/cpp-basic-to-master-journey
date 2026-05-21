//hierachy of a operators
//Write a cpp program which have predefined maths equation (int i=2*3/4;) which displays the value 
//in left to right associative rule.
#include<iostream>
using namespace std;
int main(){
	int i=2.0*3/4;  
	//note in use of float or type cast always use .0 at last of any no. or all no to avoid conflict
	float j=(float)2*3.0/4;   //float j=(float)i;  give 1 only to avoid this use i=2*3.0/4 here as the value is in int 
	cout<<j;
}

////output:
//int i=2*3/4;
//returns 1 but actual answer is 1.5 

//so here we will use type casting to get answer correct
//now the correct output is:
//1.5
