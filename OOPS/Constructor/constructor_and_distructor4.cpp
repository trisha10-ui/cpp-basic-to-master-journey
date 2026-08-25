#include <iostream>
 using namespace std;
  class Employee
   { 
   string name;
    int salary;
	 public: 
	 Employee(string n, int s) 
	 { 
	 name = n;
	  salary = s;
	   cout << "Employee created!" << endl;
	    } 
		void display()
		 {
		  cout << name << " earns " << salary << endl;
		   } 
		   ~Employee() 
		   { 
		   cout << "Employee destroyed!" << endl; 
		   }
		    };
			  int main()
			   {     
			   Employee e1("Aman", 50000); 
			       e1.display();
				        return 0; 
						} 
