//Write a program to sum of all even nos from 1 to n  //method 1
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	int sum=0;
	for(int i=1; i<=n;i++)
	{
		if(i%2==0) 
			sum+=i;
	}
	cout<<sum;
	return 0;
}
