//Que 9 print all Ascii value and there equivalent character of 26 alphabets using while loop
//use of typecasting

#include<iostream>
using namespace std;
int main(){
 	int i=65; //A
 	cout<<"--Uppercase Alphabets--"<<endl;
 	while(i<=90)
 	{
 		cout<<"ASCII: "<<i<<" || "<<"Character: "<<(char)i<<endl;
 		i++;
	}
	 cout<<endl;
	 
	int j=97; //a
 	cout<<"--Lowercase Alphabets--"<<endl;
 	while(j<=122)
 	{
 		cout<<"ASCII: "<<j<<" || "<<"Character: "<<(char)j<<endl;
 		j++;
	}
	 cout<<endl;
	return 0;
}


//
//--Uppercase Alphabets--
//ASCII: 65 || Character: A
//ASCII: 66 || Character: B
//ASCII: 67 || Character: C
//ASCII: 68 || Character: D
//ASCII: 69 || Character: E
//ASCII: 70 || Character: F
//ASCII: 71 || Character: G
//ASCII: 72 || Character: H
//ASCII: 73 || Character: I
//ASCII: 74 || Character: J
//ASCII: 75 || Character: K
//ASCII: 76 || Character: L
//ASCII: 77 || Character: M
//ASCII: 78 || Character: N
//ASCII: 79 || Character: O
//ASCII: 80 || Character: P
//ASCII: 81 || Character: Q
//ASCII: 82 || Character: R
//ASCII: 83 || Character: S
//ASCII: 84 || Character: T
//ASCII: 85 || Character: U
//ASCII: 86 || Character: V
//ASCII: 87 || Character: W
//ASCII: 88 || Character: X
//ASCII: 89 || Character: Y
//ASCII: 90 || Character: Z
//
//--Lowercase Alphabets--
//ASCII: 97 || Character: a
//ASCII: 98 || Character: b
//ASCII: 99 || Character: c
//ASCII: 100 || Character: d
//ASCII: 101 || Character: e
//ASCII: 102 || Character: f
//ASCII: 103 || Character: g
//ASCII: 104 || Character: h
//ASCII: 105 || Character: i
//ASCII: 106 || Character: j
//ASCII: 107 || Character: k
//ASCII: 108 || Character: l
//ASCII: 109 || Character: m
//ASCII: 110 || Character: n
//ASCII: 111 || Character: o
//ASCII: 112 || Character: p
//ASCII: 113 || Character: q
//ASCII: 114 || Character: r
//ASCII: 115 || Character: s
//ASCII: 116 || Character: t
//ASCII: 117 || Character: u
//ASCII: 118 || Character: v
//ASCII: 119 || Character: w
//ASCII: 120 || Character: x
//ASCII: 121 || Character: y
//ASCII: 122 || Character: z
