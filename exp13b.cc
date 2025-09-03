//overloading (polymorphism)
//exp13b

#include <iostream> 
#include <string>
using namespace std ;

class Bank {
    private :
    string name ;
    int account_number ;
    double balance ; 

    public : 

    //opening new account with zero balance  ( default constructor)

    Bank(string name , int account_number){
        balance = 0.0; 
       cout << "Account created for " << name 
             << " (A/C No: " << account_number
             << ") with balance: " << balance << endl;
    
    }

    //opening acccount with intial deposit of money (constructor)
    Bank(string name, int account_number, double intial_balance ){
    balance = intial_balance ; 
    cout<< "Account created for " << name 
             << " (A/C No: " << account_number 
             << ") with balance: " << balance << endl;
    }
    //opening joint account (constructor for copying account)
    // Constructor for copying an account (like creating joint account)
    Bank(const Bank &account ) {
        name = account.name + " (Joint)";
        account_number = account.account_number + 1; // new acc no for joint
        balance = account.balance;
        cout << "Joint account created for " << name 
             << " with balance: " << balance << endl;
    }
    };

int main() {
    // Creating an account without initial balance
    Bank acc1("Avishi", 101);

    // Creating an account with initial balance
    Bank acc2("Bob", 102, 5000.0);

    // Creating a joint account (copying details)
    Bank acc3(acc2);

    return 0;

}
