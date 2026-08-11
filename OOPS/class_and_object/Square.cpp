//square x*x class
#include<iostream>
using namespace std;
class square{
	double side;
	public: 
	
	void sides(double s){
		side=s;
	
	}
	void area(){
		cout<<"Area: "<<side*side<<endl;
	}
	void perimeter(){
		cout<<"Perimeter: "<<4*side;
	}
};
int main(){
	square s1;
	s1.sides(4);
	s1.area();
	s1.perimeter();
	return 0;
	
}
//output:
// Area: 16
// Perimeter: 16
