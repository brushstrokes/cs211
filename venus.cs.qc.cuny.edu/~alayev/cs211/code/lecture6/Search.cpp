/* Search.cpp
 *
 * Searches a list of numbers entered at the keyboard.  Notice how the fill function
 * does not receive a constant parameter, since it modifies the input array, but the 
 * search function receives a constant parameter.
 *
 */

#include <iostream>

using namespace std;

/* fillArray()
 *
 * Fills an array with values input from the user
 *
 * Requires: Size is the size of the array a, which is an int.
 * Modifies: a[0] through a[size-1] have been filled with values 
 *           read from the keyboard.
 */
void fillArray(int a[], int size);

/* search()
 * 
 * Searches for a specific target in the array, and returns the first 
 * index of target.  If target is not in the array, returns -1.
 *
 * Requires: Size is the size of the array a.  The array elements a[0] 
 *           through a[size-1] have values.  A target to search for.
 * Returns: Position of target in array a[], or -1.
 */
int search(const int a[], int size, int target);

/* main()
 * 
 * Main entry point to program which fills the array, and then does
 * a search in it.
 *
 */
int main( )
{
    cout << "This program searches a list of numbers.\n";
    const int arraySize = 10;
    int a[arraySize];

    fillArray(a, arraySize);

    int target;
    cout << "Enter a value to search for: ";
    cin >> target;
    int location = search(a, arraySize, target);
    if (location == -1)
        cout << target << " is not in the array.\n";
    else
        cout << target << " is element " << location << " in the array.\n";

    return 0;
}

void fillArray(int a[], int size)
{
    cout << "Enter " << size << " integers.\n";
    for (int index = 0; index < size; index++)
        cin >> a[index];
}

int search(const int a[], int size, int target)
{
    int index = 0;
    while ((a[index] != target) && (index < size))
        index++;
    if (index == size)//if target is not in a.
        index = -1;
    return index;
}
