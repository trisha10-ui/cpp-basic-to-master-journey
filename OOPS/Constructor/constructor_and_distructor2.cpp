#include <iostream> 
using namespace std;
 class Test 
 {
  public:
  Test() 
  { 
  cout << "Constructor called!" << endl;
   }
    ~Test() 
	{ 
	cout << "Destructor called!" << endl; 
	} 
	}; 
	int main()
	 {
	  Test t1, t2;  
	  // Two objects created 
	  cout << "Inside main function." << endl;
	   return 0;
	   } 
