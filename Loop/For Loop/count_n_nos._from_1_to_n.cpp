//Write a program to count n nos are present from 1 to n.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	
	int count=0;
	for(int i=1;i<=n;i++)
	{
		cout<<i<<" ";
		count++;
	}
	cout<<"\n Count of nos: "<<count;
	return 0;
} 
