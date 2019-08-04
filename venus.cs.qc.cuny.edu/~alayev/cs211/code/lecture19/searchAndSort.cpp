// searchAndSort.cpp

/* Contains the main functions which are part of CS211 assignment 2.
 * Does not contain the searching and sorting functions, those are in
 * other files.
 *
 * Author:  John D. Donath
 */

#include "searchAndSort.h"

/* readFile()
 * 
 * Reads data entered in an input stream, and stores it in the array.
 *
 * Parameters:
 *    NameArray& array A struct that contains an array of names.
 *    istream& A reference to an input stream.
 * Return value:
 *    bool True if read is successful, false otherwise.
 */
bool readFile(NameArray& array, istream& input) {
   array.length = 0;
   while (input && array.length < MAX_ARRAY_LENGTH) {
      input.getline(array.names[array.length++], MAX_NAME_LENGTH);
   }
   array.length--;
   if (input.eof())
      return true;
   return input;
}

/* printArray()
 *
 * Prints data stored inside the array structure stored inside
 * the parameter to the output stream in the other parameter.
 *
 * Parameters:
 *    const NameArray& array A structure containing an array of names.
 *    ostream& An output stream to which to write the contents of the array.
 */
void printArray(const NameArray& array, ostream& output) {
   for (int i = 0; i < array.length; i++) {
      output << array.names[i];
      for (int j = strlen(array.names[i]); j < 25; j++)
         cout << ' ';
      if (i % 3 == 2)
         output << endl;
   }
   output << endl;
}

/* void swap()
 *
 * Swaps the two parameters.
 *
 * Parameters:
 *    Name& An array of characters containing a name.
 *    Name& An array of characters containing another name.
 */
void swap(Name& a, Name& b) {
   Name temp;
   strcpy(temp, a);
   strcpy(a, b);
   strcpy(b, temp);
}

/* void shuffle()
 *
 * Shuffles the contents of an array
 *
 * Parmeters:
 * NameArray& A data structure that holds an array of names.
 * int beginIndex The beginning of the subbary to shuffle.
 * int endIndex The end of the subarray to shuffle.
 */
void shuffle(NameArray& array, int beginIndex, int endIndex) {
   static bool firstCall = true;
   if (firstCall) {
      // initialize random seed -- Don't worry about this
      time_t t;
      srand(time(&t));
      firstCall = false;
   }
   for (int j = 0; j < 7; j++)
      for (int i = beginIndex; i < endIndex; i++) {
         int num = rand() % (endIndex - beginIndex) + beginIndex;
         swap(array.names[i], array.names[num]);
      }
}

/* main()
 *
 * Main function for search and sort program, reads data in an input file
 * does searches and sorts with it (specified by the user) and prints
 * contents of array to output file.
 *
 * Return value:
 *    0 for success, 1 for error.
 */
/*
int main() {
   ifstream names;
   names.open("names.txt");
   if (!names)
      return 1;
   NameArray n;
   if (!readFile(n, names)) {
      cout << "Error" << endl;  
      return 1;
   }
   clock_t start, finish;
   start = clock();
   sort(n, 0, 42);
   finish = clock();
   cout << "Sort took " << finish - start << " microseconds." << endl;
   cout << "Press ENTER to continue." << endl;
   char ch[MAX_NAME_LENGTH];
   cin.getline(ch, MAX_NAME_LENGTH);
   int pos = linearSearch(n, "Nixon", 0, n.length);
   cout << pos << " " << n.names[pos] << endl;
   // We can only search the sorted portion of the array with binary search.
   pos = binarySearch(n, "Donath", 10, 40);
   if (pos == -1)
      cout << "Not found" << endl;
   else
      cout << "Really?" << endl;
   printArray(n, cout);
   return 0;
}
*/
