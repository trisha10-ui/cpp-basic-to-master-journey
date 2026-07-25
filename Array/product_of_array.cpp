//Cal. the product of all elements in the given array.
#include<iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,6,4};
	int product=1;
	
	for(int i=0; i<10;i++)
	{
		product*=arr[i];
	}
	cout<<"Product of Array: " <<product<<endl;
	return 0;
}

//output: Product of Array: 967680
//based on what values u have provided
