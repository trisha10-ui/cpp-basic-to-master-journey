//Write a program tp Display this AP series 1 3 5 7 9 upto n terms
//an=a+(n+1)d   a ist term  d diff n n terms
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	// 1 3 5 7 9 upto n
		for(int i=1;i<=n;i++)
	{
		cout<<2*i-1<<" ";
	}
}
