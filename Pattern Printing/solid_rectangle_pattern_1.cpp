//m=3 n=5
//Write a program to print the given pattern modifing the rows and columns:
//Enter m (rows): 3
//Enter n (columns): 5
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *

#include<iostream>
using namespace std;
int main(){
	int m;
	cout<<"Enter m (rows): ";
	cin>>m;
	
	int n;
	cout<<"Enter n (columns): ";
	cin>>n;
	
	for(int i=1; i<=m ; i++){
		for(int j=1; j<=n; j++)
		{
			cout<<" * ";
		}
		cout<<endl;
	}
	return 0;
}

//output:
//Enter m (rows): 3
//Enter n (columns): 5
// *  *  *  *  *
// *  *  *  *  *
// *  *  *  *  *
