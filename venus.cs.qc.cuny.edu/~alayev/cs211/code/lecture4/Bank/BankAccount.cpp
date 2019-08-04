// BankAccount.cpp

/**
 * This class simulates a Bank Account.  We did a similar one during lecture 2.
 * This will be further modified during lecture 4.
 *
 * Author: John D. Donath
 */
#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

float BankAccount::holdings = 0;

// Default
BankAccount::BankAccount() {
   balance = 0;
   id = -1;
   name = "";
}

BankAccount::BankAccount(float b) {
   balance = b;
   id = -1;
   name = "";
}

BankAccount::BankAccount(float b, int i) {
   balance = b;
   id = i;
   name = "";
}

BankAccount::~BankAccount() {
   cout << "Account closed"  << endl;
}

// Define
void BankAccount::deposit(float amount) {
   balance += amount;
   holdings += amount;
}

bool BankAccount::withdraw(float amount) {
   if (amount > balance)
      return false;
   balance -= amount;
   holdings -= amount;
   return true;
}

float BankAccount::getBalance() {
   return balance;
}

void BankAccount::setName(string str) {
   name = str;
}

float BankAccount::getHoldings() {
   return holdings;
}

// Note, some function definitions are missing, it is left as an
// exercise to put them in.
