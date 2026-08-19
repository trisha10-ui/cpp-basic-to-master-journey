//class square
#include<iostream>
using namespace std;
class square{
	public:
	int num;
	
	squares(int n)
	{
		num=n;
	}
	int calculatesquare(){
		return num*num;
	}
};

int main(){
	int num;
	cout<<"Enter a number: ";
	cin>>num;
	
	cout<<"Square of a number: "<<num*num;
	return 0;
}

//output
//Enter a number: 56
//Square of a number: 3136
