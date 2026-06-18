//Ascii alphabets caps and small
//// A A A A
//// B B B B
//// C C C C 
//AND 
//// a a a a
//// b b b b
//// c c c c
//// d d d d

//Que 2
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	
	
	cout<<"----CAPS ASCII VALUE----"<<endl;
	for(int i=1; i<=n;i++){
		for(int j=1; j<=n; j++){
			cout<<(char)(i+64)<<" ";
		}
		cout<<endl;
	}
	
	
	
	cout<<"----Small ASCII VALUE----"<<endl;
	for(int i=1; i<=n;i++){
		for(int j=1; j<=n; j++){
			cout<<(char)(i+96)<<" ";
		}
		cout<<endl;
	}
	
	
}
