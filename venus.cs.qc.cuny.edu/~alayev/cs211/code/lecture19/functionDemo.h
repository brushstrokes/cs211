// functionDemo.h

#include <iostream>

using namespace std;

long factorial(int);
long fibonacci(int);
long powerOfTwo(int);
void arrayReverse(int array[], int length);
void arrayReverse(int array[],
                  int beginIndex,
                  int endIndex);
int linearSearch(const int array[],
                 int toFind,
                 int beginIndex,
                 int endIndex);
int binarySearch(const int array[],
                 int toFind,
                 int beginIndex,
                 int endIndex);
void selectionSort(int array[],
                   int beginIndex,
                   int endIndex);
void bubbleSort(int array[],
                int beginIndex,
                int endIndex);
void insertionSort(int array[],
                   int beginIndex,
                   int endIndex);
void quickSort(int array[],
               int beginIndex,
               int endIndex);
void mergeSort(int array[],
               int beginIndex,
               int endIndex);
