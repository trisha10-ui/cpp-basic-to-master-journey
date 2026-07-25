//Traverse of an array
#include<iostream>
using namespace std;
int main(){
	int arr[4][3]={{1,2,3},{2,3,4},{4,5,6}};  //initialization
	
	for(int i=0; i<4;i++){
		for(int j=0; j<3; j++)
		cout<<arr[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}

//output: 
//1 2 3
//2 3 4
//4 5 6
//0 0 0
