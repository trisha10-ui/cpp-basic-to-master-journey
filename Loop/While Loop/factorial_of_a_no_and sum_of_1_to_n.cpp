//Que 7 Factorial of a no and find sum of 1 to n
//n*(n+1)/2
#include<iostream>
using namespace std;
int main(){
			int n;
			cout<<"Enter n: ";
			cin>>n;
			int fact=1;
			int sum=0;
			int i=1;
			while(i<=n)
			{
				 fact=fact*i;
				 sum=n*(n+1)/2;
				 i++;
			}
				cout<<"Factorial: "<<fact<<endl;
				cout<<"Sum: "<<sum;
				return 0;
}

	//output:Enter n: 8
//Factorial: 40320
//Sum: 36
