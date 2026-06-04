//if-else-if ladder 
//Write a cpp program to check which week-day appear in a given no.
#include<iostream>
using namespace std;
int main(){
	int weekno;
	cout<<"Enter the week no: ";
	cin>>weekno;
	if(weekno==1)
	cout<<"Monday";
	
	else if(weekno==2)
	cout<<"Tuesday";
	
	else if(weekno==3)
	cout<<"Wednesday";
	
	else if(weekno==4)
	cout<<"Thursday";
	
	else if(weekno==5)
	cout<<"Friday";
	
	else if(weekno==6)
	cout<<"Saturday";
	
	else if(weekno==7)
	cout<<"Sunday";
	
	else
	cout<<"Enter correct no";
	
	return 0;	
}
