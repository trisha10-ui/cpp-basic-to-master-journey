//Rectangle class 

#include<iostream>
using namespace std;
class rectangle{
	int length,breadth;
	public:
		void setData(int l,int b){
			length=l;
			breadth=b;
		}
		void area(){
			cout<<"Area= "<<length*breadth<<endl;
		}
		
		void perimeter(){
			cout<<"Perimeter= "<<2*(length+breadth)<<endl;
		}
};
int main(){
	rectangle r1;
	r1.setData(5,3);
	r1.area();
	r1.perimeter();
	return 0;
}

//output:
//Area= 15
//Perimeter= 16
