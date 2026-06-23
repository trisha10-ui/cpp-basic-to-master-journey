//Rectangle m=4 n =5 inside space

// *  *  *  *  *
// *           *
// *           *
// *  *  *  *  *

#include<iostream>
using namespace std;
int main()
    {
	int m;
	cout<<"Enter m(rows):";
	cin>>m;
	
	int n;
	cout<<"Enter n(cloumns): ";
	cin>>n;
	
	for(int i=1;i<=m;i++){
		for(int j=1; j<=n;j++)
		{
			if(i==1 || i==m || j==1 || j==n)
			{ 
			cout<<" * ";
			}
			else
			{
			cout<<"   "; // 3 spaces imp
			}
		}
			cout<<endl;
						}
	return 0;
	}
