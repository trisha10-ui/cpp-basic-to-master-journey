//constructor
//Write a program to create a default constructorn using student data  
#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll;
		float cgpa;
		
		student(string s,int r,float g)
		{
			name=s;
			roll=r;
			cgpa=g;
		}
};

int main(){
	student s1("Rama",54,8.5);
	cout<<s1.name<<" "<<s1.roll<<" "<<s1.cgpa<<endl;	
} 

//output:Rama 54 8.5
