//Bubble sort in (asending order)
#include<iostream>
using namespace std;
int main(){
	int a[10]={10,9,7,101,23,44,12,78,34};
	int i,j,temp;
	for(int i=0 ;i<10 ; i++){
		for(int j=i+1;j<10;j++){  //if j=i+1 then in ascending order if j=i decending order
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	cout<<"Sorted Array: ";
	for(int i=0; i<10 ; i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
//Sorted Array: 0 7 9 10 12 23 34 44 78 101
