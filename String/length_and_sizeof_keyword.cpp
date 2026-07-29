//Finding the length and size of String
//length : gives count of the elements in the given string
//size of: gives n+1 as in | a| b | c | d | e | f | g | \0 | => 7+1=8 sizeof =8
//sizeof stores null at last
#include<iostream>
using namespace std;
int main(){
	string s="University";
	cout<<"String: "<<s<<endl;
	cout<<s.length(); //10
	cout<<endl;
	cout<<s.size();//10
}
//output: 
//String: University
//10
//10


//Evaluation Time:sizeof is resolved at compile time based on type declarations.
//len is usually evaluated at runtime by counting active elements. 

//What it Counts:sizeof measures physical memory allocation (including reserved space
// or null terminators like \0).

//len measures logical content length (excluding padding or null characters).

//Operands:sizeof works on any primitive type, structure, or array.
//len works specifically on collections, lists, or text strings. 
