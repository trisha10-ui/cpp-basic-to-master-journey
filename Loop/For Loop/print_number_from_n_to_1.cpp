//Write a program to print number from n to 1
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the n value : ";
	cin>>n;
	
	for(int i=n; i>=1;i--)
	{
		cout<<i<<" "<<endl;
	}
	return 0;
}
