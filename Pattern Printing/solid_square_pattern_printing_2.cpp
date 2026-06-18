//m=4 n=4
//solid square
//Enter n(rows) and(column): 4
// *  *  *  *
// *  *  *  *
// *  *  *  *
// *  *  *  *
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n(rows) and(column): ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
			for(int j=1; j<=n; j++)
		{
			cout<<" * ";
		}
			cout<<endl;
	}
	return 0;
	
}
