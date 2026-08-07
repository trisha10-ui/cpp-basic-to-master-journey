//calculator 
#include<iostream>
using namespace std;
int main(){
	char op;
	double a,b,result,DBL_MAX;
	
	cout<<"Enter the operator (+,-,/,*): ";
	cin>>op;
	
	cout<<"Enter the operands a and b: ";
	cin>>a>>b;
	
	switch(op){
		case '+':
			result =a+b;
			break;
		case '-':
			result= a-b;
			break;
		case '*':
			result =a*b;
			break;
		case '/':
			result =a/b;
			break;
		default:
			cout<<"Error! incorrect operator\n";
			result=-DBL_MAX;
	}
	if(result!=-DBL_MAX)
	cout<<result;
	return 0;
}
//output:
//Enter the operator (+,-,/,*): /
//Enter the operands a and b: 5.9
//58.3
//0.101201


//Enter the operator (+,-,/,*): *
//Enter the operands a and b: 48
//120
//5760
//
//
//Enter the operator (+,-,/,*): +
//Enter the operands a and b: 7893
//32589
//40482
//
//
//Enter the operator (+,-,/,*): -
//Enter the operands a and b: 78953
//32589
//46364
