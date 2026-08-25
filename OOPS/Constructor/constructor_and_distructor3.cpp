#include <iostream>
 using namespace std;
  class Number
   { 
   int a, b;
    public: 
	Number() 
	{ 
	a = b = 0;
	 }       
	      // default 
		  Number(int x) { a = x; b = 0; } 
		     // one argument 
			 Number(int x, int y)
			  { a = x; b = y; 
			  }  
			  // two arguments 
			  void show() 
			  { 
			  cout << "a=" << a << ", b=" << b << endl; 
			  } 
			  ~Number() {
			   cout << "Destructor called!" << endl; 
			   } 
			   }; 
			   int main() 
			   {
			    Number n1, n2(5), n3(3,7); 
				n1.show(); 
				n2.show(); 
				n3.show(); 
				return 0;
				 } 
