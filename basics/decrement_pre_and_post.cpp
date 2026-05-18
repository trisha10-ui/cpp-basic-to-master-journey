//Decrement 
#include<iostream>
using namespace std;
int main(){
	int x=2;
	
	//preDecrement
	cout<<x<<endl;   //output:2
	cout<<--x<<endl;   //1
	cout<<x<<endl;     //1
	
	
	//postdecrement
	cout<<x<<endl;     //1
	cout<<x--<<endl;   //so 1st 1 then -1
	cout<<x<<endl;     //so here 0
	return 0;
}
