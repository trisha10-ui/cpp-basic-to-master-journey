#include <iostream>
 using namespace std; 
  class BankAccount
   {     string accountHolder;  
      int accountNumber;   
	    double balance;
		  public: 
	 //   Constructor (initialize account)
	BankAccount(string name, int accNo, double bal)
	  {       
	 accountHolder = name;  
	 accountNumber = accNo; 
	  balance = bal;
	cout <<"Account created for "<< accountHolder << " with balance: " << balance << endl; 
	    }  
		    //   Deposit function 
			    void deposit(double amount)
				 {        
				  balance += amount; 
cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
     }  
	     //   Withdraw function     
		 void withdraw(double amount) {  
		        if (amount <= balance) 
				{   balance -= amount;            
				 cout << "Withdrawn: " << amount << " | Remaining Balance: " << balance << endl;
				          } else {             
						  cout << "Insufficient Balance!" << endl;         
						  }     
						  }     
						   //   Display account details     
						   void display() {         
						   cout << "\n--- Account Details ---" << endl;         
						   cout << "Holder: " << accountHolder << endl;         
						   cout << "Account No: " << accountNumber << endl;         
						   cout << "Balance: " << balance << endl;     
						   }      //   Destructor (auto called at end)     
						   ~BankAccount() {         
						   cout << "Account of " << accountHolder << " closed!" << endl;    
						    } }; int main() 
							{ // Creating object (constructor auto called) 
							BankAccount acc1("Shanim", 101, 5000.0); 
							acc1.display(); 
							acc1.deposit(2000); 
							acc1.withdraw(3000); 
							acc1.withdraw(6000); 
							 // should fail due to low balance
							  // Destructor auto called here when program ends 
							  return 0;
 } 
