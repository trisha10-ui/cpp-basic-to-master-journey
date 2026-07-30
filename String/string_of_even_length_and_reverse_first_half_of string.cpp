//input a sting of even length and reverse the fist half of string.
#include<iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cout<<"Enter the String: ";
	getline(cin,s);
	cout<<"original String: "<<s<<endl;
	
	 if (s.length() % 2 != 0) {
        cout << "Error: The string length is not even!" <<endl;
        return 1;
    }
    int mid = s.length() / 2;
    reverse(s.begin(),s.begin() + mid);

    cout <<"Reversed String : "<< s;
	return 0;
}

//output:
//Enter the String: Concatination defines addition of two string
//original String: Concatination defines addition of two string
//Reversed String :  senifed noitanitacnoCaddition of two string
