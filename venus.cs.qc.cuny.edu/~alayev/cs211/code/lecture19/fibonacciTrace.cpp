// fibonacciTrace.cpp

#include <iostream>
#include <fstream>

int fibonacci(int n, int depth, ostream& out);

using namespace std;

int main()
{
   char outputFileName[] = "fibonacciTrace.txt";
   ofstream outFile;
   outFile.open(outputFileName);

   cout << "Enter argument to fibonacci function:  ";
   int argument;
   cin >> argument;

   outFile << "Trace of calls to fibonacci function."
           << endl << endl;
   int result = fibonacci(argument, 0, outFile);
   outFile << endl << "The returned value is: "
           << result << endl;
   cout << outputFileName << " has been generated." << endl;
   return 0;
}  // function main()

int fibonacci(int n, int depth, ostream& out)
{

   if ( n < 0 )  {
      cout << "fibonacci of " << n
           << "undefined, must be >=0." << endl;
   }  // if

   static int functionCallCount = 0;

   int valueToReturn;
   if ( n == 0 || n == 1 )
      valueToReturn = 1;
   else
     valueToReturn = (fibonacci(n-1, depth + 1, out) 
                    + fibonacci(n-2, depth + 1, out));

   for ( int i = 0; i < depth; i++ )
      out << "  ";
   out << (++functionCallCount) << ". ";

   out << "parameter n = " << n
             << ", value to return = "
             << valueToReturn << "." << endl;
   return valueToReturn;
}  // function fibonacci(int, int, ostream&)
