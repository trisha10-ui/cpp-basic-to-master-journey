#include <iostream>
 using namespace std;
  class Student 
  {     string name;
       int age; 
	   public:     // Constructor  
	   Student(string n, int a) 
	   {    
	    name = n; 
		age = a;  
	    cout << "Constructor called! Object Created." << endl;    
	    }    
		void display() 
		{  
		       cout << "Name: " << name << ", Age: " << age << endl; 
		}     
		// Destructor   
		~Student() { 
		cout << "Destructor called! Object Destroyed." << endl;
		 } 
}; 
	int main()
 {  
 Student s1("Shanim", 21);
// constructor auto called    
 s1.display();    
  // When main ends, destructor auto called 
 return 0; 
	}  
