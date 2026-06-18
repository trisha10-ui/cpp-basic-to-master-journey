//Que 2 Write a program to print the Sum of a given number 
//ex input: 123
//output: 6
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int i=1;
	int digit;
	int sum=0;
	while(i<=n)
	{
		digit=n%10;
		sum+=digit;
		n=n/10;
		--i;
	}
	cout<<"Sum: "<<sum;
	return 0;
}

//output: Enter n:
//12345
//Sum: 15
