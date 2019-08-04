#include <string>

// Declare
class BankAccount {
   public:
      void deposit(float amount);
      bool withdraw(float amount);

      // Accessor Functions
      float getBalance();
      int getAccountNumber();
      string getLast();
      string getFirst();

      // Mutator Functions
      void setLast(string);
      void setFirst(string);

   private:
      void payInterest();
      float balance;
      int accountNumber;
      string last;
      string first;
      float interest;
};

// Define
void BankAccount::deposit(float amount) {
   balance +=amount;
}

bool BankAccount::withdraw(float amount) {
   if (amount > balance)
      return false;
   balance -= amount;
   return true;
}

string BankAccount::getFirst() {
   return first;
}

void BankAccount::setLast(string str) {
   last = str;
}

// Note: Some definitions are missing, it is an exercise to write them

int main() {
    BankAccount small[5];
    int number; int amount;
    
    cout << "What is your account number?";  
    cin >> number;

    cout << "How much do you want to deposit?";
    cin >> amount;

    for (int i = 0; i < 5; i++) 
       if (number == small[i].getAccountNumber()) {
          small[i].deposit(amount);
          cout << small[i].getBalance();
       }
    return 0;
}
