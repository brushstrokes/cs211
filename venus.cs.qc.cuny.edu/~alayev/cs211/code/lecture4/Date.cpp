// Date.cpp

#include "Date.h"

// Initializes a date to the default value of January 1, 1970
Date::Date() {
   month = 1;;
   day = 1;
   year = 1970;
}

// Initializes the class taking in a day number (over the whole year)
// and a year number.
Date::Date(int dayNum, int y) {
   if (dayNum < 1)
      dayNum = 1;
   if ((y % 4 == 0) && (dayNum > 366))
      dayNum = 366;
   else if (dayNum > 365)
      dayNum = 365;
   year = y;
   if (dayNum <= 31) {
      month = 1;
      day = dayNum;
   } else {
      dayNum -= 31;
      if ((year % 4 == 0) && (dayNum <= 29)) {
         day = dayNum;
         month = 2;
         return;
      }
      else if (year % 4 == 0)
         dayNum -= 29;
      else if (dayNum <= 28) {
         day = dayNum;
         month = 2;
         return;
      }
      else
        dayNum -= 28;
      if (dayNum <= 31) {
        month = 3;
        day = dayNum;
      }
      else {
         dayNum -= 31;
         if (dayNum <= 30) {
            month = 4;
            day = dayNum;
         }
         else {
            dayNum -= 30;
            if (dayNum <= 31) {
               month = 5;
               day = dayNum;
            }
            else {
               dayNum -= 31;
               if (dayNum <= 30) {
                  month = 6;
                  day = dayNum;
               }
               else {
                  dayNum -= 30;
                  if (dayNum <= 31) {
                    month = 7;
                    day = dayNum;
                  }
                  else {
                    dayNum -= 31;
                    if (dayNum <= 31) {
                        month = 8;
                        day = dayNum;
                    }
                    else {
                       dayNum -= 31;
                       if (dayNum <= 30) {
                          month = 9;
                          day = dayNum;
                       }
                       else {
                          dayNum -= 30;
                          if (dayNum <= 31) {
                             month = 10;
                             day = dayNum;
                          }
                          else {
                             dayNum -= 31;
                             if (dayNum <= 30) {
                                month = 11;
                                day = dayNum;
                             }
                             else {
                                month = 12;
                                day = dayNum - 30;
                             }
                          }
                       }
                    }
                  }
               }
            } 
         }
      }
   }
}

// Initializes a date to the values in the parameters.  If the
// date is not legal, sets the date to 1 of the illegal value.
// (Illegal years are set to 2000)
Date::Date(int m, int d, int y) {
   month = m;
   day = d;
   year = y;
   fixDate();
}

// Returns the month stored by the class
string Date::getMonth() const { 
   if (month == 1)
      return "January";
   if (month == 2)
      return "February";
   if (month == 3)
      return "March";
   if (month == 4)
      return "April";
   if (month == 5)
      return "May";
   if (month == 6)
      return "June";
   if (month == 7)
      return "July";
   if (month == 8)
      return "August";
   if (month == 9)
      return "September";
   if (month == 10)
      return "October";
   if (month == 11)
      return "November";
   return "December";
}

// Returns the day stored by the class
int Date::getDay() const { return day;}

// Retruns the year stored by the class
int Date::getYear() const { return year;}

// Returns a date that is the number of 
// days forward from the parameter.  Ie. if the date stored
// in the class were January 1, 2003, and 5 were passed to this
// function, it would return January 6, 2003.  Negative numbers
// are also allowed as parameters
Date Date::addDays(int n) const {
   int dayNum = dayOfYear();
   dayNum += n;
   int tempYear = year;
   while (dayNum < 1) {
      tempYear--;
      if (tempYear % 4 == 0)
         dayNum += 366;
      else
         dayNum += 365;
   }
   while (((tempYear % 4 == 0) && (dayNum > 366)) ||
          ((tempYear % 4 != 0) && (dayNum > 365))) {
      if (tempYear % 4 == 0)
         dayNum -= 366;
      else
         dayNum -= 365;
      tempYear++;
   }
   return Date(dayNum, tempYear);
}

// Returns which day of the year this class is
int Date::dayOfYear() const {
   if (month == 1)
      return day;
   int temp = day + 31;
   if (month == 2)
      return temp;
   temp += 28;
   if (year % 4 == 0)
      temp++;
   if (month == 3)
      return temp;
   temp += 31;
   if (month == 4)
      return temp;
   temp += 30;
   if (month == 5)
      return temp;
   temp += 31;
   if (month == 6)
      return temp;
   temp += 30;
   if (month == 7)
      return temp;
   temp += 31;
   if (month == 8)
      return temp;
   temp += 31;
   if (month == 9)
      return temp;
   temp += 30;
   if (month == 10)
      return temp;
   temp += 31;
   if (month == 11)
      return temp;
   temp += 30;
   return temp;
}

// Fixes the date so that it is in legal range
void Date::fixDate() {
   if (month < 1)
      month = 1;
   if (month > 12)
      month = 12;
   if (day < 1)
      day = 1;
   if (day > 31)
      day = 31;
   if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) &&
       (day > 30))
      day = 30;
   if ((month == 2) && (year % 4 != 0) && (day > 28))
      day = 28;
   if ((month == 2) && (year % 4 == 0) && (day > 29))
      day = 29;
}

string Date::toString(int i) {
   int k = i, numDigits = 0;
   if (k < 0)
      k = k*-1;
   while (k > 0) {
      numDigits++;
      k = k / 10;
   }
   if (numDigits == 0)
      numDigits++;

   char d[numDigits+1];
   d[numDigits] = '\0';

   for (int j = numDigits-1, k = 1; j >= 0; j--, k *= 10)
      d[j] = (char) ((i / k) % 10 + '0');

   return string(d);
}

// Returns the Date passed to it as a string
string Date::toString(const Date d) {
   string temp = d.getMonth();
   temp = temp + " " + toString(d.getDay()) + ", " + toString(d.getYear());
   return temp;
}
