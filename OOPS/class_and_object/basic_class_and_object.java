//write a program in cpp to create a class of student with n number of student details which stores name,roll_no,and cgpa.

#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int roll_no;
		float cgpa;
};
int main(){
	student s1;
	s1.name="Rama";
	s1.roll_no=30;
	s1.cgpa=7.9;
	
	student s2;
	s2.name="shama";
	s2.roll_no=8;
	s2.cgpa=8.0;
	
	cout<<"name: "<<s1.name<<"  cgpa: "<<s1.cgpa<<"   roll no: "<<s1.roll_no;
	cout<<endl;
	cout<<"name: "<<s2.name<<" cgpa:  "<<s2.cgpa<<"   roll no: "<<s2.roll_no;
	return 0;
}

//output:
//name: Rama  cgpa: 7.9   roll no: 30
//name: shama cgpa:  8   roll no: 8
