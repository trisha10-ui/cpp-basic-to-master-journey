//Addition of two single Dimensional array
#include<iostream>
using namespace std;
int main(){
	int a[50],b[50],c[50],n;
	cout<<"Enter number of n elements:";
	cin>>n;
	
	cout<<"Enter 1st array elements: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	cout<<"Enter 2nd array elements: ";
	for(int i=0; i<n ;i++)
	cin>>b[i];
	
	cout<<"Addition of 2 D Array: \n";
	for(int i=0;i<n;i++){
		c[i]=a[i]+b[i];
		cout<<c[i]<<" ";
	}
	return 0;
}
//output:
//Enter number of n elements:6
//Enter 1st array elements: 10 20 30 40 50 60
//Enter 2nd array elements: 70 80 90 100 110 120
//Addition of 2 D Array:
//80 100 120 140 160 180
