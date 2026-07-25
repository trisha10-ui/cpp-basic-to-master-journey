//Even Numbers
#include <iostream>
using namespace std;
int main(){
	
	int arr[10]={1,5,2,4,9,6,9,22,42,76};
	
	for(int i=0; i<10; i++)
		if(arr[i]%2==0)
		cout<<arr[i]<<" ";
}

//output:2 4 6 22 42 76
