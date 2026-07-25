#include <iostream>
using namespace std;
int main(){
	//sum of array
	int arr[50],n,sum=0;
	cout<<"Enter n numbers : ";
	cin>>n;
	
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
		sum +=arr[i];
	}
	cout<<"Sum= "<<sum;
	return 0;
}


//Enter n numbers : 45
//1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21
//22 23 24 25 26 27 28 29 30 31 32 33 34 35 36 37 38 39
//40 41 42 43 44 45
//Sum= 1035
