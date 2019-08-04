// testPowerOfTwo.cpp

#include "functionDemo.h"
#include <stdio.h>

int main(int argc, char* argv[]) {
   if (argc < 2) {
      cout << "There must be at least one command line argument." << endl;
      return 0;
   }

   int parameter;
   
   if (!sscanf(argv[1], "%d", &parameter)) {
      cout << "The command-line argument must be an integer." << endl;
      return 1;
   }

   long result = powerOfTwo(parameter);

   cout << "2 to the " << parameter << " power, equals " << result << endl;
   return 0;
}
