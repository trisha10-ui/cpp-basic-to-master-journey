//give the length and breadth of a rectangle.
//Write a program to find whether their area is greater than its perimeter.
#include<iostream>
using namespace std;
int main(){
	float length,breadth;
	cout<<"Enter the length of rectangle: ";
	cin>>length;
	cout<<"Enter the breadth of rectangle: ";
	cin>>breadth;
	
	float area=length*breadth;
	cout<<"Area: "<<area<<endl;
	
	float peri=2*(length*breadth);
	cout<<"Perimeter: "<<peri<<endl;
	
	if(area>peri)
	{
		cout<<"Area is greater than perimeter: "<<area<<endl;
	}
	
	else
	{
		cout<<"Perimeter is greater than area: "<<peri<<endl;
	}
	return 0;
}
