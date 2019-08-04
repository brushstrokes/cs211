// Moment.h

/**
 * Contains the demonstration of the Time-Date-Moment inheritance 
 * hierarchy.  Demonstrates Multiple Inheritance.
 *
 * Author: John D. Donath
 */

#ifndef MOMENT_H
#define MOMENT_H

class Date {
   public:
      Date() { month = 1; day = 1; year = 2004; }
      Date(int m, int d, int y) { month = m; day = d; year = y; }
      int getM() const { return month; }
      int getD() const { return day; }
      int getY() const { return year; }
   protected:
      int month, day, year;
};

class Time {
   public:
      Time() { hour = 0; minute = 0; second = 0; }
      Time(int h, int m, int s) { hour = h; minute = m; second = s; }
      int getH() const { return hour; }
      int getM() const { return minute; }
      int getS() const { return second; }
   protected:
      int hour, minute, second;
};

class Moment : public Date, public Time {
   public:
      Moment() : Date(), Time() { }
      Moment(int mo, int d, int y, int h, int mi, int s) : Date(mo, d, y),
          Time(h, mi, s) { }
      
      // Must redefine all functions (and variables) that are inherited
      // from more than one superclass
      int getM() const { return month + minute; }

      // These functions are optional
      int getMi() const { return minute; }
      int getMo() const { return month; }
};

#endif
