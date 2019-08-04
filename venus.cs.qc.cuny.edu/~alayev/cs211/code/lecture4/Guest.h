// Guest.h

/**
 * This is the answer to homework 2.  It implements a class guest that
 * keeps track of a guest staying at a hotel.  It keeps track of the
 * last name and first name of a guest who made the reservation, total number 
 * of people staying in the room, the Date of check-in, and the number
 * of nights the guests will be staying at the hotel.
 */

#ifndef GUEST_H
#define GUEST_H

#include "Date.h"
#include <string>

using namespace std;

class Guest {
   public:
      // Sets default values
      Guest();

      // Inputs data from the user
      void input();

      // Returns the full name of the guest (first and last names)
      string getName() const;

      // Returns the last name of the guest
      string getLastName() const {return lastName;}

      // Returns the number of people staying in the room
      int getNumPeople() const {return numPeople;}

      // Returns the check-in date
      Date getCheckIn() const {return checkIn;}

      // Returns the number of nights these guest will be
      // staying at this room.
      int getNumNights() const {return numNights;}

      // Returns the check-out date
      Date getCheckOut() const;

   private:
      string lastName;
      string firstName;
      int numPeople;
      Date checkIn;
      int numNights;
};

#endif
