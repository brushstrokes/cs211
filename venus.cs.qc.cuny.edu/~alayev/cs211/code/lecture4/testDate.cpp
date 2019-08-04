// testDate.cpp

/**
 * This program is an implementation of homework 1.  It inputs a date from
 * the user, and tells the user which day of the year it is.  It then
 * repeatedly inputs numbers of days forward and backwards from that
 * day, and outputs data about those days as well.
 */

#include <string>
#include <iostream>
#include "Date.h"

using namespace std;

int main() {
   int mon, day, year;
   cout << "Welcome to the date program.  Please enter a month (1-12):" << endl;
   cin >> mon;
   cout << "Enter a day:>";
   cin >> day;
   cout << "Enter a year:>";
   cin >> year;

   // Calls constructor that sets data to that input by the user above.
   Date date(mon, day, year);

   cout << "You entered " << Date::toString(date) << "." << endl;
   cout << "The " << date.dayOfYear() << " day of the year." << endl;

   bool flag = true;
   do {
      int num;
      cout << "Enter a number (positive or negative):>";
      cin >> num;
      Date day2 = date.addDays(num);
      if (num < 0) {
         cout << -1 * num << " days before "<< Date::toString(date) << " is "
              << Date::toString(day2) << ".  The " << day2.dayOfYear()
              << " day of the year." << endl;
      }
      else {
         cout << num << " days after "<< Date::toString(date) << " is "
              << Date::toString(day2) << ".  The " << day2.dayOfYear()
              << " day of the year." << endl;
      }
      char ans;
      cout << "Enter another date? (Y/N) :>";
      cin >> ans;
      if (toupper(ans) == 'N')
         flag = false;
   } while (flag);

   return 0;
}
