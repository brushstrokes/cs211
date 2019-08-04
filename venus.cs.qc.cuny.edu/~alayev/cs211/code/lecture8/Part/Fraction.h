/* Fraction.h
 *
 * Can store a fraction.  A fraction is a number where you have a numerator
 * divided by a denominator.
 *
 * Author: John D. Donath
 */

#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
   public:
      /* Fraction()
       *
       * Creates a new instance of class Fraction, with 0 as the numerator
       * and 1 as the denominator
       *
       * Modifies:  Creates a new instance of the class Fraction with 0 as
       *            the nemerator, and 1 as the denominator.
       */
      Fraction();

      /* Fraction()
       *
       * Creates a new instance of class Fraction, with the parameter as 
       * the numerator and 1 as the denominator
       *
       * Requires: 1 integer as parameter.
       * Modifies: New instance has the parameter as numerator and 1 as
       *           denominator.
       */
      Fraction(int);

      /* Fraction(int, int)
       *
       * Creates a new instance of class Fraction, with the first parameter as 
       * the numerator and the second parameter as the denominator
       *
       * Requires: 2 integers as parameters.
       * Modifies: New instance of class Fraction has first parameter as
       *           numerator, and second parameter as denominator.
       */
      Fraction(int, int);

      /* getFraction()
       *
       * Returns this fraction as a double
       *
       * Returns: The numerator divided by the denominator.
       */
      double getFraction() const {return ((double) numerator / denominator);}

      /* getNumerator()
       *
       * Returns the numerator
       *
       * Returns: Numerator
       */
      int getNumerator() const {return numerator;}

      /* getDenominator()
       *
       * Returns the denominator
       *
       * Returns: Denominator
       */
      int getDenominator() const {return denominator;}

      /* operator+
       *
       * Overload of + operator to add two fractions
       *
       * Requires: Another instance of class Fraction
       * Returns: A new instance of class Fraction with the
       *          sum of the two Fractions.
       */
      const Fraction operator+ (const Fraction&) const;

      /* operator-
       *
       * Overload of - operator to subtract two fractions
       *
       * Requires: Another instance of class Fraction
       * Returns: A new instance of class Fraction with the
       *          difference between the two Fractions.
       */
      const Fraction operator- (const Fraction&) const;

      /* operator*
       *
       * Overload of * operator to multiply two fractions
       *
       * Requires: Another instance of class Fraction
       * Returns: A new instance of class Fraction with the
       *          product of the two Fractions.
       */
      const Fraction operator* (const Fraction&) const;

      /* operator/
       *
       * Overload of / operator to divide two fractions
       *
       * Requires: Another instance of class Fraction
       * Returns: A new instance of class Fraction with the
       *          quotient of the two Fractions.
       */
      const Fraction operator/ (const Fraction&) const;

      /* operator==
       *
       * Overload of == operator to compare two fractions
       *
       * Requires: Another instance of class Fraction
       * Returns: A boolean true if they are equal, false if
       *          they are not.
       */
      bool operator == (const Fraction&) const;

      /* operator-
       *
       * Overload of unary - operator to negate a fraction
       *
       * Returns: An instance of the class Fraction with
       *          the negation of this fraction.
       */
      const Fraction operator- () const;

      /* operator<<
       *
       * Overload of << operator to print a fraction
       *
       * Requires: An output stream and an instance of class Fraction.
       * Modifies: Adds this class Fraction to the output stream.
       * Returns: The output stream it received as the parameter.
       */
      friend ostream& operator<< (ostream&, const Fraction&);

      /* operator>>
       *
       * Overload of >> operator to read in a fraction from user
       *
       * Requires: An input stream and an instance of class Fraction.
       * Modifies: Takes a fraction from the input stream.
       * Returns: The input stream it received as the parameter.
       */
      friend istream& operator>> (istream&, Fraction&);

   private:
      // Reduces fraction to lowest terms
      void reduce();

      // Helper function that returns gcd of two numbers.
      static int gcd(int, int);

      int numerator, denominator;
};

#endif
