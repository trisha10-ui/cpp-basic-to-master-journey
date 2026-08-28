//object pointer 
#include<iostream>
using namespace std;

class cricketer{
	public:
		int runs;
		string name;
		float avg;
		
		cricketer(string name, int runs, float avg){
			this->name=name;
			this->runs=runs;
			this->avg=avg;
		}
			
};

	void change(cricketer* c){
//			(*c).avg=56.9;
			c->avg=34.4;//object pointer 
			
		}
		
int main(){
//	cricketer c1("virat",567,56.577);
//	cout<<c1.avg<<endl;
//	change(&c1);
//	cout<<c1.avg<<endl;
//	cricketer c2("Rohit",345,51.243);
//	int x=4;
//	cout<<x<<endl;
//	int* p=&x;
//	cout<<p<<endl;  //print address of &x
//	cout<<*p <<endl;
//	*p=100;
//	cout<<x<<endl;	
//
	cricketer c1("Virat",237,73.2);
	cricketer c2("Rohit",342,53.4);
	cricketer *p1=&c1;
	cout<<(*p1).runs<<endl; //237
//	(*p1).avg=76.67; //object //a
	p1->avg=53.7;//b
	cout<<c1.avg<<endl;
	//same for c2
}
