#include <string>

// Declare
class BankAccount {
   public:
      void deposit(float);
      bool withdraw(float);

      // Accessor
      float getBalance();
      int getID();
      string getName();

      // Mutator
      void setName(string);

   private:
      float balance;
      int id;
      string name;
};

// Define
void BankAccount::deposit(float amount) {
   balance = balance + amount;
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

int BankAccount::getID() {
   return id;
}

string BankAccount::getName() {
   return name;
}

void BankAccount::setName(string str) {
   name = str;
}

// Note: The definitions of several functions are missing.
// It is an exercise to put them in.

int main() {
   BankAccount accounts[5];

   /////////////////////

   int num;
   float b;
   cout << "Enter your account number:>";
   cin >> num;

   cout << "Enter amount to deposit:>";
   cin >> b;

   for (int i = 0; i < 5; i++)
      if (num == accounts[i].getID())
         accounts[i].deposit(b);

   return 0;
}
