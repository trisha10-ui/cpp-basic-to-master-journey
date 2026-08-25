#include<iostream>
using namespace std;

class cricketer{
	public:
	int runs;
	string name;
	float avg;
	
	cricketer(string name,int runs,float avg)
	{
		this->name=name;
		this->runs=runs;
		this->avg=avg;
	}	
	void print(){
	cout<<name<<" "<<runs<<" "<<avg<<endl;
}
};


int main(){
	cricketer c1("virat",450000,55.2);
	cricketer c2("parag",78450,47.9);
	
	c1.print();
    c2.print();
}
