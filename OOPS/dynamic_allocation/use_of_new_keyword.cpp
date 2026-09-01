//dynamic allocation 
//use of new keyword 
#include<iostream>
using namespace std;
int main(){
	int *ptr;
	ptr=new int;
	*ptr=10;
	cout<<"Value= "<<*ptr;
	return 0;
}

//output: value=10
