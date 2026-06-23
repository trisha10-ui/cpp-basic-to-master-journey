//Return Type
//output: 15
//5
//11.55

#include<iostream>
using namespace std;
//void Function
void sum(int a, int b){
	cout<<a+b;
}

int add(int a, int b){
	return a+b;
}

float summ(float a, float b){
	return a+b;
}

int main(){
	 sum(7,8);
	 
	 cout<<endl;
	 
	 cout<<add(3,2);
	 
	 cout<<endl;
	 
	 cout<<summ(6.57,4.98);
	 
	 return 0;
}
