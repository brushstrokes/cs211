// BankAccount.h

#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H

/**
 * This class simulates a Bank Account.  We did a similar one during lecture 2.
 * This will be further modified during lecture 4.
 *
 * Author: John D. Donath
 */

#include <string>
#include <iostream>

using namespace std;

class BankAccount {
   public:
      // Default Constructor
      BankAccount();

      // Set amount to an initial deposit
      BankAccount(float);

      // Set initial deposit and account number
      BankAccount(float, int);

      // Destructor
      ~BankAccount();

      // Accessor for Holdings
      static float getHoldings();
 
      // Deposits the amount received by the parameter into the account
      void deposit(float);

      // Witdraws the amount passed by the parameter from the account
      // Return true if the withdrawal was okay, false if the withdrawal
      // was denied (due to lack of funds in the account)
      bool withdraw(float);

      // Accessor functions
      // Returns the balance in the account
      float getBalance();

      // Returns the name of the depositor associated with the account
      string getName();

      // Returns the account number
      int getID();

      // Mutator functions
      // Changes the name associated with the account
      void setName(string);

   private:
      static float holdings;
      float balance;
      string name;
      int id;
};

#endif
