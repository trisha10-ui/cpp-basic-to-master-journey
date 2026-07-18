//Combination: n!/r!*(n-r)!
#include<iostream>
using namespace std;
int fact(int x){
	int f=1;
	for(int i=1; i<=x; i++)
	{
	   f *= i;
	}
	return f;
}
	
	int main(){
		int n,r;
		cout<<"enter n and r: ";
		cin>>n>>r;
		
		int a=fact(n);
		int b=fact(r);
		int c=fact(n-r);
		
		cout<<"Combination: "<<a/(b*c);
		return 0;
	}
