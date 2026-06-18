//Write a program to print exception number of a loop
//Do while
//loop iterates at least one time 
//it prints except no which never prints in while or for loop
#include<iostream>
using namespace std;
int main(){
	int i=11;
	do{
		cout<<i<<"  ";
		i++;
	}
	while(i<=10);
	return 0;
}

//output:11
