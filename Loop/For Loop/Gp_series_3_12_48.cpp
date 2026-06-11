//Write a program to Display the GP series 3,12,48
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n value: ";
	cin>>n;
	int a= 3;
	cout<<"Series: ";
	for(int i=1; i<=n; i++){
		cout<<a<<" ";
		a*=4;
	}
	return 0;
}
