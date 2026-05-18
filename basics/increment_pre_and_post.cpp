//increment 
#include<iostream>
using namespace std;
int main(){
	int x=1;   
	
	//pre increment ++x
	cout<<x<<endl; // show current value of x output:1
	cout<<++x<<endl;  //output : 2   pre so 2
	cout<<x<<endl;   //2
	
	//post increment x++
	cout<<x<<endl;      //2
	cout<<x++<<endl;    //2  post so first 2 then + 1 
	cout<<x<<endl;      //   so 3 here 
}
