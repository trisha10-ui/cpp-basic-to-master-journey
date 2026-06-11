//Write a program to sum of all even nos from 1 to n  //method 2
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	
	int sum=0;
	for(int i=2; i<=n;i=i+2)
	{
		cout<<i<<endl;
		sum+=i;
	}
	cout<<"Sum of n nos.: ";
	cout<<sum;
	return 0;
}
