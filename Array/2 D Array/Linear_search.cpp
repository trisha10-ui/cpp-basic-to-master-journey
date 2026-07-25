//linear search
#include<iostream>
using namespace std;
int main(){
	int roll[10]={1,2,3,4,6,7,5,8,9,10};
	int r=5;
	for(int i=0;i<10;i++)
	{
			if(r==roll[i])
			cout<<"Found at: "<<i+1;
		}
		
	return 0;
}

//output:Found at: 11 Found at: 15
