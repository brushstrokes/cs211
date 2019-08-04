// searchAndSort.h

/* Contains function headers for sorting programs which are part of
 * CS211 assignment 2.
 *
 * Author:  John D. Donath
 */

#include <iostream>
#include <fstream>
#include <cmath>
#include <ctime>

using namespace std;

#define MAX_NAME_LENGTH 64
#define MAX_ARRAY_LENGTH 6000

// A name is a c-string of MAX_NAME_LENGTH characters
typedef char Name[MAX_NAME_LENGTH];

// Stores an array and its maximum length
struct NameArray {
   Name names[MAX_ARRAY_LENGTH];
   int length;
};

// Sorts the elements of an array
void sort(NameArray& array, int beginIndex, int endIndex);

// Shuffles the elements in an array
void shuffle(NameArray& array, int beginIndex, int endIndex);

// Swaps two elements in the array
void swap(Name& a, Name& b);

// Search in an array for a certain value
int linearSearch(const NameArray& array, Name value, int begin, int end);
int binarySearch(const NameArray& array, Name value, int begin, int end);

// Reads a file, and stores its contents in an array
bool readFile(NameArray& array, istream& input);

// Prints contents of an array to a specified output stream.
void printArray(const NameArray& array, ostream& output);

