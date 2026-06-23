///ASCII ALPHABETS HALF Pyramid
//Enter n: 7
//       A
//     A B C
//   A B C D E
// A B C D E F G

#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		for(int j=1; j<=n-i;j++){  //left space
			cout<<" ";
		}
		for(int j=0; j<2*i-1; j++)
		{
			cout<<char('A'+j);  //character printing
		}
		cout<<endl;
	}
}
