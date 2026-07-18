//Largest and second largest element
#include<iostream>
using namespace std;
int main(){
	int arr[100],n,largest,second;
	
	cout<<"Enter size: ";
	cin>>n;
	
	for(int i=0; i<n;i++)
		cin>>arr[i];
	
	largest=second=arr[0];
	
	for(int i=1; i<n;i++){
		if(arr[i]>largest){
			second=largest;
			largest=arr[i];
		}
	else if(arr[i]>second && arr[i]!=largest)
	{
		second=arr[i];
	}
}
	cout<<"Largest ="<<largest<<endl;
	cout<<"Second largest="<<second;
	
	return 0;
}

//Enter size: 5
//4
//5
//3
//8
//9
//Largest =9
//Second largest=8
