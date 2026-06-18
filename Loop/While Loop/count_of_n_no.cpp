//Que 1
//count digits of a given no. //takes number in series ex 12345 only 
//hint: div % 10
//using while loop
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	int count=0;
	int i=1;
	while(i<=n)
	{
		n=n%10;
		i++;
		count++;
	}
	cout<<"Count of a n: "<<count;
	return 0;
}


//output:Enter n: 123456789
//Count of a n: 9
