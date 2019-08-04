/* main.cpp
 *
 * Main program that inputs two fractions, and tests the various
 * operator overloads on them.
 * 
 * Author: John D. Donath
 */

#include <iostream>
#include "Fraction.h"

using namespace std;

/* operator+
 *
 * Overload of + operator to add two fractions
 *
 * Requires: Two instances of class Fraction
 * Returns: A new instance of class Fraction with the
 *          sum of the two Fractions.
 */
const Fraction operator+ (const Fraction&, const Fraction&);

/* operator-
 *
 * Overload of - operator to subtract two fractions
 *
 * Requires: Two instances of class Fraction
 * Returns: A new instance of class Fraction with the
 *          difference between the two Fractions.
 */
const Fraction operator- (const Fraction&, const Fraction&);

/* operator*
 *
 * Overload of * operator to multiply two fractions
 *
 * Requires: Two instances of class Fraction
 * Returns: A new instance of class Fraction with the
 *          product of the two Fractions.
 */
const Fraction operator* (const Fraction&, const Fraction&);

/* operator/
 *
 * Overload of / operator to divide two fractions
 *
 * Requires: Two instances of class Fraction
 * Returns: A new instance of class Fraction with the
 *          quotient of the two Fractions.
 */
const Fraction operator/ (const Fraction&, const Fraction&);

/* operator==
 *
 * Overload of == operator to compare two fractions
 *
 * Requires: Two instances of class Fraction
 * Returns: True if they are the same, false if they are not.
 */
bool operator== (const Fraction&, const Fraction&);

/* operator-
 *
 * Overload of unary - operator, which makes negates value of fraction.
 *
 * Requires: An instance of class Fraction
 * Returns: The negative of the instance of class Fraction.
 */
const Fraction operator- (const Fraction&);

int main() {
   Fraction f1, f2;
   cout << "Enter first fraction>";
   cin >> f1;
   cout << "Enter second fraction>";
   cin >> f2;

   cout << "The value of f1 in decimal is: " << f1.getFraction() << endl;
   cout << "The value of f2 in decimal is: " << f2.getFraction() << endl;
   if (f1 == f2)
      cout << "f1 and f2 are equal." << endl;
   else
      cout << "f1 and f2 are not equal." << endl;

   Fraction f3 = f1 + f2;
   cout << "Their sum is: " << f3 << endl;

   f3 = f1 - f2;
   cout << "The difference between them is: " << f3 << endl;

   f3 = f1 * f2;
   cout << "Their product is: " << f3 << endl;

   f3 = f1 / f2;
   cout << "Their quotient is: " << f3 << endl;

   cout << "The negation of f1 is: " << -f1 << endl;

   return 0;
}

const Fraction operator+ (const Fraction& f1, const Fraction& f2) {
   int d3 = f1.getNumerator() * f2.getDenominator();
   int n1 = f2.getDenominator() * f1.getNumerator();
   int n2 = f1.getDenominator() * f2.getNumerator();
   int n3 = n1 + n2;
   Fraction f(n3, d3);
   return f;
}

const Fraction operator- (const Fraction& f1, const Fraction& f2) {
   int d3 = f1.getNumerator() * f2.getDenominator();
   int n1 = f2.getDenominator() * f1.getNumerator();
   int n2 = f1.getDenominator() * f2.getNumerator();
   int n3 = n1 - n2;
   Fraction f(n3, d3);
   return f;
}

const Fraction operator* (const Fraction& f1, const Fraction& f2) {
   int n = f1.getNumerator() * f2.getNumerator();
   int d = f1.getDenominator() * f2.getDenominator();
   Fraction f(n, d);
   return f;
}

const Fraction operator/ (const Fraction& f1, const Fraction& f2) {
   int n = f1.getNumerator() * f2.getDenominator();
   int d = f1.getDenominator() * f2.getNumerator();
   Fraction f(n, d);
   return f;
}

bool operator== (const Fraction& f1, const Fraction& f2) {
   int cmp = f1.getNumerator() * f2.getDenominator();
   int cmp2 = f2.getNumerator() * f1.getDenominator();
   return cmp == cmp2;
}

const Fraction operator- (const Fraction& f) {
   int n = -f.getNumerator();
   int d = f.getDenominator();
   if ((n < 0) && (d < 0)) {
      n = -n;
      d = -d;
   }
   Fraction f2(n, d);
   return f2;
}
