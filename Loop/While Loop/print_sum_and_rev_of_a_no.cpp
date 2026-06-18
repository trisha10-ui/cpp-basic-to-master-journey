//Que 6 print sum of given no and its reverse
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	int ld;
	int sum=0;
	int rev=0;
	int i=1;
	while(n!=0)
	{
		ld=n%10;
		rev=rev*10+ld;
		n=n/10;
		sum+=ld;
	}
	cout<<"Sum: "<<sum<<endl;
	cout<<"Reversed no: "<<rev;
	return 0;
}


//output: Enter n: 123456
//Sum: 21
//Reversed no: 654321
