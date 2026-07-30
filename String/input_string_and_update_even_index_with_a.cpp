//Input a sting and update all the even position in the 
//string to character 'a' considering 0 waste indexing (if else condition)
#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter a String: ";
	getline(cin,s);
	cout<<" Original string is: "<<s<<endl;
	
	for(int i=0; i<s.length();i++){
		if(i%2==0){
			s[i]='a';
		}
	}
	cout<<"Updated string is: "<<s<<endl;
	return 0;
}
// Output
// Enter a String: Hello This is a Testing String 
//  Original string is: Hello This is a Testing String 
// Updated string is: aeala ahasaia a aeatana ataiaga
