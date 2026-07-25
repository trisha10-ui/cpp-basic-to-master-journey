//Find max element in the array
#include<iostream>
using namespace std;
int main(){
	int a[50],n,max;
	cout<<"Enter the no. of elements: ";
	cin>>n;
	cout<<"Enter the array elements: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	max=a[0];
	for(int i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	cout<<"Max value: "<<max;
	return 0;
}
//output:
//Enter the no. of elements: 10
//Enter the array elements: 7 8 9 3 4 1 2 10 5 6
//Max value: 10
