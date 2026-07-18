//Sum of digit
#include<iostream>
using namespace std;

int sum(int n){
	int sum=0;
	while(n>0){
		sum=sum+(n%10);
		n=n/10;
	}
	return sum;
}
int main(){
	cout<<sum(1234);
	return 0;
}
