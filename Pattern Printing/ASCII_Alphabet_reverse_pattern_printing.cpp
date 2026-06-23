//Que 11: Write a program to print a Ascii reverse Alphabet pattern.
// Enter n: 4
// D
// D  C
// D  C  B
// D  C  B  A

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i ; j++)
		{
			cout<<" "<<(char)(n-j+1+64)<<" ";
		}
		cout<<endl;
	}
	return 0;
}
