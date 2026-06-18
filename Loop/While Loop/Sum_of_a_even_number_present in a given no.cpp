//Que 4 Sum of all even nos in a given no
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int digit;
	int sum=0;
	int i=1;
	while(i<=n)
	{
		digit=n%10;
		if(digit%2==0)
		{
			sum+=digit;
		}
			n=n/10;
	}
	cout<<"Sum of even no: "<<sum;
	return 0;
}


//output:Enter n: 42
//Sum of even no: 6
