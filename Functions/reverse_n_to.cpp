//reverse n to 1
#include<iostream>
using namespace std;
void print(int n){
	cout<<n<<endl;
	print(n-1);
}
int main(){
	print(3);
}
