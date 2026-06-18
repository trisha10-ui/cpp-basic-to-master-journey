//Que 3 Write a program to print the Product of a given no
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int i=1;
	int digit;
	int product=1;
	while(i<=n)
	{
		if(n!=0){
		digit=n%10;
		product*=digit;
		n=n/10;
		i++;
	}
}
	cout<<"product: "<<product;
	return 0;
}

//output:Enter n: 12345
//product: 120
