//Updating Index Values
#include<iostream>
using namespace std;
int main(){
	string s;
	cout<<"Enter String: ";  //University
	getline(cin,s);
	cout<<"Given Sting: "<<s<<endl;
	//College
	s[0]='C';
	s[1]='o';
	s[2]='l';
	s[3]='l';
	s[4]='e';
	s[5]='g';
	s[6]='e';
	s[7]=' ';
	s[8]=' ';
	s[9]=' ';
	cout<<"Updated Sting: "<<s;

} 
//output:
//Enter String: University
//Given Sting: UniversityUpdated Sting: College
