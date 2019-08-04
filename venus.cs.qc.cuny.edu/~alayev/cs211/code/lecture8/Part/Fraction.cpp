/* Fraction.cpp
 *
 * Can store a fraction.  A fraction is a number where you have a numerator
 * divided by a denominator.
 *
 * Author: John D. Donath
 */

#include <iostream>
#include <cmath>
#include "Fraction.h"

using namespace std;

/* Fraction()
 *
 * Creates a new instance of class Fraction, with 0 as the numerator
 * and 1 as the denominator
 *
 * Modifies:  Creates a new instance of the class Fraction with 0 as
 *            the nemerator, and 1 as the denominator.
 */
Fraction::Fraction() : numerator(0), denominator(1) { }
   
/* Fraction()
 *
 * Creates a new instance of class Fraction, with the parameter as 
 * the numerator and 1 as the denominator
 *
 * Requires: 1 integer as parameter.
 * Modifies: New instance has the parameter as numerator and 1 as
 *           denominator.
 */
Fraction::Fraction(int n) : numerator(n), denominator(1) { }

/* Fraction()
 *
 * Creates a new instance of class Fraction, with the first parameter as 
 * the numerator and the second parameter as the denominator
 *
 * Requires: 2 integers as parameters.
 * Modifies: New instance of class Fraction has first parameter as
 *           numerator, and second parameter as denominator.
 */
Fraction::Fraction(int n, int d) {
   if (0 == d) {
      cout << "Illegal value for denominator" << endl;
      exit(1);
   }

   numerator = n;
   denominator = d;
}

/* operator+
 *
 * Overload of + operator to add two fractions
 *
 * Requires: Another instance of class Fraction
 * Returns: A new instance of class Fraction with the
 *          sum of the two Fractions.
 */
const Fraction Fraction::operator+ (const Fraction& f2) const {
   int d3 = denominator * f2.denominator;
   int n1 = f2.denominator * numerator;
   int n2 = denominator * f2.numerator;
   int n3 = n1 + n2;
   Fraction f(n3, d3);
   f.reduce();
   return f;
}

/* operator-
 *
 * Overload of - operator to subtract two fractions
 *
 * Requires: Another instance of class Fraction
 * Returns: A new instance of class Fraction with the
 *          difference between the two Fractions.
 */
const Fraction Fraction::operator- (const Fraction& f2) const {
   int d3 = denominator * f2.denominator;
   int n1 = f2.denominator * numerator;
   int n2 = denominator * f2.numerator;
   int n3 = n1 - n2;
   Fraction f(n3, d3);
   f.reduce();
   return f;
}

/* operator*
 *
 * Overload of * operator to multiply two fractions
 *
 * Requires: Another instance of class Fraction
 * Returns: A new instance of class Fraction with the
 *          product of the two Fractions.
 */
const Fraction Fraction::operator* (const Fraction& f2) const {
   int n3 = numerator * f2.numerator;
   int d3 = denominator * f2.denominator;
   Fraction f(n3, d3);
   f.reduce();
   return f;
}

/* operator/
 *
 * Overload of / operator to divide two fractions
 *
 * Requires: Another instance of class Fraction
 * Returns: A new instance of class Fraction with the
 *          quotient of the two Fractions.
 */
const Fraction Fraction::operator/ (const Fraction& f2) const {
   int n3 = numerator * f2.denominator;
   int d3 = denominator * f2.numerator;
   Fraction f(n3, d3);
   f.reduce();
   return f;
}

/* operator==
 *
 * Overload of == operator to compare two fractions
 *
 * Requires: Another instance of class Fraction
 * Returns: A boolean true if they are equal, false if
 *          they are not.
 */
bool Fraction::operator== (const Fraction& f2) const {
   int a = numerator * f2.denominator;
   int b = denominator * f2.numerator;
   return a == b;
}

/* operator-
 *
 * Overload of unary - operator to negate a fraction
 *
 * Returns: An instance of the class Fraction with
 *          the negation of this fraction.
 */
const Fraction Fraction::operator- () const {
   int n = -numerator;
   int d = denominator;
   if ((n < 0) && (d < 0)) {
      -n; 
      -d;
   }
   else if (d < 0) {
      -n;
      -d;
   }
   Fraction f(n, d);
   return f;   
}

void Fraction::reduce() {
   int g = gcd(abs(numerator), abs(denominator));
   numerator /= g;
   denominator /= g;
}

/* operator<<
 *
 * Overload of << operator to print a fraction
 *
 * Requires: An output stream and an instance of class Fraction.
 * Modifies: Adds this class Fraction to the output stream.
 * Returns: The output stream it received as the parameter.
 */
ostream& operator<< (ostream& output, const Fraction& f1) {
   if (((f1.numerator < 0) || (f1.denominator < 0))
      && !((f1.numerator < 0) && (f1.denominator < 0)))
      output << " - ";
   output << abs(f1.numerator) << " / " << abs(f1.denominator);
   return output;
}

/* operator>>
 *
 * Overload of >> operator to read in a fraction from user
 *
 * Requires: An input stream and an instance of class Fraction.
 * Modifies: Takes a fraction from the input stream.
 * Returns: The input stream it received as the parameter.
 */
istream& operator>> (istream& input, Fraction& f1) {
   int n, d;
   char ch;
   input >> n >> ch >> d;
   if (ch != '/') {
      cout << "Fraction format error." << endl;
      exit(1);
   }
   if (0 == d) {
      cout << "Illegal value for denominator." << endl;
      exit(1);
   }
   f1.numerator = n;
   f1.denominator = d;

   return input;
}

// Helper funtion which returns gcd of two numbers
int Fraction::gcd(int x, int y) {
   if (x % y == 0)
      return y;
   return gcd(y, x % y);
}
