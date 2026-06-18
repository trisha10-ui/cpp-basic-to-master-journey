//Que 1 Write a program to print Ascii alphabets using pattern printing
// A B C D 
// A B C D 
// A B C D 
// A B C D 

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++)
		{
			cout<<(char)(j+64)<<" ";
		}
			cout<<endl;
	}
	return 0;
}
