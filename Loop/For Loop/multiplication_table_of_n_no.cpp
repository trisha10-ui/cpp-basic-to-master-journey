//Write a program to print table of n number.
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n table no: ";
	cin>>n;
	int num=n;
	for(int i=1;i<=10;i++)
	{
		cout<<num<<" X "<<i<<" = "<<num*i<<endl;
	}
	return 0;
}
