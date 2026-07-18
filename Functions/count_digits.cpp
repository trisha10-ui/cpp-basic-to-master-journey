//count digits of number
#include<iostream>
using namespace std;
int count(int n)
{
	int count =0 ;
	while(n>0)
	{
	count++;
	n=n/10;
}
return count;
}
int main(){
	cout<<count(1234);
	return 0;
}
