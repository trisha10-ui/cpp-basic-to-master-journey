//input string of length greater than 5 and reverse the sub string position 
//from 2 to 5 using in built function
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter the String: ";
	getline(cin,s);
	cout<<"original String: "<<s<<endl;
	
	reverse(s.begin() + 2, s.begin() + 6);
    cout << s;
	return 0;
}

//output:
//Enter the String: concatination
//original String: concatination
//cotacnination
