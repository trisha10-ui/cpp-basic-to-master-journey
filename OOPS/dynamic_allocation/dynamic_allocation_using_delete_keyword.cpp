//using delete keyword
#include<iostream>
using namespace std;
int main(){
	int *ptr = new int;
	*ptr=50;
	cout<<"Value= "<<*ptr<<endl;
	delete ptr;
	cout<<"Delete value= "<<*ptr<<endl;   
	//gives garbage value as *ptr=50 is delete
	return 0;
}
