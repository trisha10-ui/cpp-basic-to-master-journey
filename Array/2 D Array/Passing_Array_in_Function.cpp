//Passing Array to functions
//Traverse

#include<iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
	int temp;
	for(int i=0; i<n; i++)
		for(int j=i; j<n; j++)
		if(a[j]<a[i])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}

int main(){
	int arr[5]={1,5,3,4,2};
	BubbleSort(arr,5);
	for(int i=0; i<5; i++)
	cout<<arr[i]<<" ";
	return 0;
}
