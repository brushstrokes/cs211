// BankAccount3.cpp

#include <string>
#include <iostream>

using namespace std;

// Declare
class BankAccount {
   public:
      void deposit(float);
      bool withdraw(float);

      // Accessor
      float getBalance();
      string getName();
      int getID();

      // Mutator
      void setName(string);

   private:
      float balance;
      string name;
      int id;
};

// Define
void BankAccount::deposit(float amount) {
   balance += amount;
}

bool BankAccount::withdraw(float amount) {
   if (amount > balance)
      return false;
   balance -= amount;
   return true;
}

float BankAccount::getBalance() {
   return balance;
}

void BankAccount::setName(string str) {
   name = str;
}

// Note, the definitions of several functions are missing.
// It is an exercise to put them in.

// Use
int main() {
   BankAccount account;

   float amt;
   cout << "Enter an amount:>";
   cin >> amt;
   
   account.deposit(amt);

   cout << "The balance is: " << account.getBalance();

   return 0;
}
