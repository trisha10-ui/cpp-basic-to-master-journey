//switch case
//Write a program to create  calculator that perform basic arithmatic operations(+,-,*,/) using switch case ,the calculator should input to nums and operator from user.
#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cin>>n1;
	
	char op;
	cin>>op;
	
	cin>>n2;
	
	switch(op)
	{
		case '+' :
			cout<<n1+n2;
			break;
			
		case '*' :
			cout<<n1*n2;
			break;
			
		case '-' :
			cout<<n1-n2;
			break;
			
		case '/' :
			cout<<n1/n2;
			break;		
			
		default :
		cout<<"Invalid";	
	}
}
