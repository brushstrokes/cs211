// Date.h

#ifndef DATE_H
#define DATE_H

// Holds a date, which is a month-day-year combination.  There
// are also certain functions for manipulating dates that are
// associated with dates

#include <string>
using namespace std;

class Date {
   public:
      // Initializes a date to the default value of January 1, 1970.
      Date();

      // Initializes the class taking in a day number (over the whole year)
      // and a year number.
      Date(int, int);

      // Initializes a date to the values in the parameters.  If the
      // date is not legal, sets the date to 1 of the illegal value.
      // (Illegal years are set to 2000)
      Date(int, int, int);

      // Returns the month stored by the class
      string getMonth() const;

      // Returns the day stored by the class
      int getDay() const;

      // Returns the year stored by the class
      int getYear() const;

      // Returns a date that is the number of 
      // days forward from the parameter.  Ie. if the date stored
      // in the class were January 1, 2003, and 5 were passed to this
      // function, it would return January 6, 2003.  Negative numbers
      // are also allowed as parameters
      Date addDays(int) const;

      // Returns the Number of the date in the year
      int dayOfYear() const;

      // Converts the a date class passed to it as a parameter
      // to a string.
      static string toString(const Date);

   private:
      // Fixes the date so that it is within legal range
      void fixDate();

      // Helper function for toString(const Date)
      static string toString(int);

      int month, day, year;
};

#endif
