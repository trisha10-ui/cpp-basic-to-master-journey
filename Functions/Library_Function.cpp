//Library functions -> header file #include<cmath>
//power, square root,cube,min,max
//output: 
//Square root: 2
//Cube root: 2.15443
//Minium Value: 4
//Maximum Value: 12
//Power of a number: 16


#include<iostream>
#include<cmath>
using namespace std;
int main(){
	cout<<"Square root: "<<sqrt(4); //-> square root of 4
	
	cout<<endl;
	 
	cout<<"Cube root: "<<cbrt(10); //-> cube root of 10
	
	cout<<endl;
	 
	cout<<"Minium Value: "<<min(8,4) ; //-> min value find
	
	cout<<endl;
	
	cout<<"Maximum Value: "<<max(8,12); //-> max value find
	
	cout<<endl;
	
	cout<<"Power of a number: "<<pow(2,4); //->power value 2^4
	
	cout<<endl;
}
