//Write a program to find sum of first N natural no.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the n value : ";
	cin>>n;
	int sum=0;
		
	for(int i=1; i<=n;i++)
	{
		sum+=i;
	}
		cout<<sum;
	
	return 0;
}
