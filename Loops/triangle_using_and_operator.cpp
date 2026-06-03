//triangle sides
//Write a program to prove if this 3 condition statisfies then the triangle is valid a+b>c , b+c>a ,  c+a>b
#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Enter the side a: ";
	cin>>a;
	
	cout<<"Enter the side b: ";
	cin>>b;
	
	cout<<"Enter the side c: ";
	cin>>c;
	
	if(a+b>c && b+c>a && c+a>b)
	{
		cout<<"Valid triangle ";
	}
	
	else{
		cout<<"Invalid triangle";
	}
}
