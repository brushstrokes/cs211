// BankAccount.cpp

/**
 * This is the program that we did during the second lecture.  We 
 * will work with it during the fourth lecture for further examples.
 *
 * Author: John D. Donath
 */

#include <string>
#include <iostream>
#include "BankAccount.h"

using namespace std;

int main() {
   BankAccount b1;
   BankAccount b2(50);
   BankAccount b3(10.50, 12345);

   b2.deposit(20);

   BankAccount::getHoldings();

   return 0;
}
