// Guest.cpp

/**
 * This is the answer to homework 2.  It implements a class guest that
 * keeps track of a guest staying at a hotel.  It keeps track of the
 * last name and first name of a guest who made the reservation, total number 
 * of people staying in the room, the Date of check-in, and the number
 * of nights the guests will be staying at the hotel.
 */

#include "Guest.h"
#include <iostream>

// Sets default values for the variables
Guest::Guest() {
   lastName = "";
   firstName = "";
   numPeople = 0;
   numNights = 0;
}

// Inputs data for this class from the user
void Guest::input() {
   cout << "Enter the last name of the guest :>";
   cin >> lastName;
   cout << "Enter the first name of the guest :>";
   cin >> firstName;
   cout << "Enter the number of people :>";
   cin >> numPeople;
   int mon, day, year;
   cout << "Enter the month of check in :>";
   cin >> mon;
   cout << "Enter the day of check in :>";
   cin >> day;
   cout << "Enter the year of check in :>";
   cin >> year;
   checkIn = Date(mon, day, year);
   cout << "Enter the number of nights that the guest will be staying"
        << " in the hotel :>";
   cin >> numNights;
}

// Returns the full name of the guest (first and last names)
string Guest::getName() const {
   string name = firstName + " " + lastName;
   return name;
}

// Returns the check-out date
Date Guest::getCheckOut() const {
   return checkIn.addDays(numNights);
}
