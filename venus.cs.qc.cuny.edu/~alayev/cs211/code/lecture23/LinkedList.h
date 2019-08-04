// LinkedList.h

#include "Node.h"
#include "IndexOutOfBounds.h"
#include <iostream>

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

namespace DonathList {
   using Donath::IndexOutOfBounds;
   using std::ostream;

   template <class T>
   class LinkedList {
      public:
         LinkedList();

         LinkedList(const LinkedList<T>&);

         virtual ~LinkedList();

         LinkedList<T>& operator=(const LinkedList<T>&);

         T getElementAt(int position) const throw (IndexOutOfBounds);

         T operator[](int position) const throw (IndexOutOfBounds);

         void insert(T element, int position) throw (IndexOutOfBounds);

         void append(T element);
 
         T remove(int position) throw (IndexOutOfBounds);

         // Returns position of element in the list, -1 if not found
         int find(T value) const;

         bool isEmpty() const;

         template<class S>
         friend ostream& operator<< (ostream&, const LinkedList<S>&);

      private:
         Node<T>* head;
   };
}
#endif
