//Write a cpp program to Calculate Simple interest (user define)
#include<iostream>
using namespace std;
int main(){
	float P;
	float R;
	float T;
	cout<<"Enter The Values of P ,R, T : "<<endl;
	cin>>P>>R>>T;
	cout<<"The Values of P ,R , T are: "<<P<<","<<R<<","<<T<<endl;
	
	float SI=P*R*T/100.00;
	cout<<"The SI is: "<<SI;
	
	return 0;
}


//Output:Enter The Values of P ,R, T :
//1000
//0.4
//36
//The Values of P ,R , T are: 1000,0.4,36
//The SI is: 144
