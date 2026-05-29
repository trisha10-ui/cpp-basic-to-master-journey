//using if else-if loop 
//if Cost price and selling price of an items is input throughout the keyboard .
//Write a program to determine wheather the seller has meet profit or incurred loss or 
//no profit no loss also determine how much profit he made or loss he incurred. 
#include<iostream>
using namespace std;
int main(){
	int cp,sp;
	cout<<"Enter the Cp: ";
	cin>>cp;
	cout<<"Enter the Sp: ";
	cin>>sp;
	
	if(sp>cp){       //sp greater than cost price profit
	int profit=sp-cp;
	cout<<"Profit: "<<profit;
}
	
	else if(sp<cp){      //sp less than cost price loss
	int loss=sp-cp;
	cout<<"Loss: "<<loss;
}
	
	else if(sp==cp){   
	
	cout<<"No Loss and No profit";
}
	
	else{
	
	cout<<"Enter valid amount";
}
	
}
