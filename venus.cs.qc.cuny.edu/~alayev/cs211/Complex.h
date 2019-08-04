// Complex.h

// Author: Yosef Alayev

#ifndef COMPLEX_H
#define COMPLEX_H

class Complex
{
   private:
      double a;
      double b;
   public:
      Complex();
      Complex(double x, double y);
      double getReal() const;
      double getImaginary() const;
      void setReal(double x);
      void setImaginary(double y);
      void input();
      void output() const;
      
      const Complex add(const Complex& z);
      const Complex sub(const Complex& z);
      const Complex mult(const Complex& z);
      const Complex div(const Complex& z);

      Complex conjugate() const;
      double length() const;

};
#endif
