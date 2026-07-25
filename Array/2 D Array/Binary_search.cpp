//Binary Search
#include<iostream>
using namespace std;
	int binarysearch(int arr[],int x)
	{
	int first=0;
	int last=9;
	while(first<=last)
	{
		int mid=first+(last-first)/2;
		if(x == arr[mid])
			{
		return mid;
			}
		else if(x>arr[mid]){
		first=mid+1;
			}
		else{
		last=mid-1;
			}
	}
	return -1;
	}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int target=7;
	int result=binarysearch(arr,target);
	
	if(result!=-1){
		cout<<"Element is found at index: "<<result<<endl;
	}
	else
	{
		cout<<"Elements is not found in array "<<endl;
	}
	return 0;
}

//output:Element is found at index: 6

