//Declaration of String And taking user input using getline(s)
//getline(s): Takes full length string and gives accurate output
#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter String: ";
	getline(cin,s);
	cout<<s;

} 
//output:
//Enter String: Hello This is user and testing getline(s) command
//Hello This is user and testing getline(s) command
