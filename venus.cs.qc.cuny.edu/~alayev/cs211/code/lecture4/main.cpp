// main.cpp

/**
 * This is the main program that uses the class that you wrote for homework
 * 2.  It will be used to test your class and see whehter you worte it
 * it correctly.  It inputs a list of guests and check in dates, and prints
 * out a summary of their information.
 */

#include "Date.h"
#include "Guest.h"
#include <iostream>
#include <iomanip>
#include <string>
#define NUM_GUESTS 5

using namespace std;

int main() {
   // Input information about the guests
   Guest guests[NUM_GUESTS];

   for (int i = 0; i < NUM_GUESTS; i++)
      guests[i].input();

   // Print out a summary of their information
   cout.setf(ios::left);
   cout << setw(20) <<"Name" 
        << setw(8) << "People"
        << setw(18) << "Check-in"
        << setw(8) << "Nights"
        << "Check-Out"
        << endl;
   for (int i = 0; i < NUM_GUESTS; i++) {
      cout << guests[i].getName() << setw(20-guests[i].getName().length())
           << " "
           << setw(8) << guests[i].getNumPeople() 
           << Date::toString(guests[i].getCheckIn()) 
           << setw(18-Date::toString(guests[i].getCheckIn()).length()) << " "
           << setw(8) << guests[i].getNumNights()
           << Date::toString(guests[i].getCheckOut()) << endl;
   }

   return 0;
}
