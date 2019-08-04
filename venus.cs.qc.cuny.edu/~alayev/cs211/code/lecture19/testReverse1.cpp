// testReverse1.cpp

#include "functionDemo.h"
#include <cstdio>
#include <string>

const int MAX_LENGTH = 256;

int main(int argc, char* argv[]) {
   if (argc < 2) {
      cout << "There must be at least one command line argument." << endl;
      return 0;
   }

   int nums[argc-1];
   for(int i = 1; i < argc; i++)
   {
      if (!sscanf(argv[i], "%d", nums + i - 1))
         return 1;
   }

   cout << "Before reverse ";
   for (int j = 0; j < argc-1; j++)
      cout << nums[j] << " ";
   cout << endl;

   arrayReverse(nums, argc - 1); 

   cout << "The reverse ";
   for (int k = 0; k < argc-1; k++)
      cout << nums[k] << " ";
   cout << endl;
   return 0;
}  // function main
