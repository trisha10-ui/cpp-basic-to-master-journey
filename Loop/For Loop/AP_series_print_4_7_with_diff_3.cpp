///Write a program to Display this AP 4 7 10 13 16 upto n terms
//an=a+(n+1)d   a ist term  d diff n n terms
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	
	// 4 7 10 13 upto n
	int a=4;
		for(int i=1;i<=n;i++)
	{
		cout<<a<<" ";
		a+=3;
	}
	return 0;
}
