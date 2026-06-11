//Write a program to print factor of n using break keyword
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	int f = 1; // store highest fector
	for(int i=n/2;i>=1;i--){
	     if(n%i==0) {
	     	cout<<i<<" ";
	     	break;//to get out of the loop
		 }
}
cout<<f;
	return 0;
}
