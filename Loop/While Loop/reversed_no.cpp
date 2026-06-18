//Que 5 Write a program to print no in reverse order 
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int ld;
	int rev=0;
	int i=1;
	while(n!=0)
	{
		ld=n%10;
		rev=rev*10+ld;
		n=n/10;
	}
	cout<<"Reversed no: "<<rev;
	return 0;
}

//output:Enter n: 123456
//Reversed no: 654321
