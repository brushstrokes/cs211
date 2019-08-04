// LinkedList.cpp

#include "LinkedList.h"
#include <string>

namespace DonathList {
   using Donath::IndexOutOfBounds;
   using std::string;
   using std::strcat;

   template <class T>
   LinkedList<T>::LinkedList() {head = NULL;}

   template <class T>
   LinkedList<T>::LinkedList(const LinkedList<T>& other) {
      Node<T>* point = other.head;
      if (point) {
         Node<T>* point2;
         head = new Node<T>(other.head->data);
         point2 = head;
         while (point->next) {
             point2->next = new Node<T>(point->next->data);
             point2 = point2->next;
             point = point->next; 
         }
      }
      else 
         head = NULL;
   }

   template <class T>
   LinkedList<T>::~LinkedList() {
      if (head) {
         Node<T>* point = head->next;
         delete head;
         while (point) {
            Node<T>* point2 = point->next;
            delete point;
            point = point2;
         }
      }
   }

   template <class T>
   LinkedList<T>& LinkedList<T>::operator=(const LinkedList<T>& other) {
      if (this == &other)
         return *this;
      
      if (head && other.head)
         head->data = other.head->data;
      else if (head && !other.head) {
         while (head) {
            Node<T>* point = head;
            head = head->next;
            delete point;
         }
         return *this;
      }
      else if (!head && !other.head)
         return *this;
      else // if (!head && other.head)
         head = new Node<T>(other.head->data);

      Node<T>* point = head;
      Node<T>* otherPoint = other.head;
      while (otherPoint->next) {
         if (point->next)
             point->next->data = otherPoint->next->data;
         else 
             point->next = new Node<T>(otherPoint->next->data);
         point = point->next;
         otherPoint = otherPoint->next;
      }
      Node<T>* temp = point;
      point = point->next;
      temp->next = NULL;
      while (point) {
         temp = point->next;
         delete point;
         point = temp;
      }

      return *this;
   }

   template <class T>
   T LinkedList<T>::getElementAt(int position) const throw (IndexOutOfBounds) {
      Node<T>* point = head;
      if (!point) {
         char str[100];
         strcpy(str, "Position ");
         if (position < 0) {
            strcat(str, "-");
            position *= -1;
         }
         else if (position == 0)
            strcat(str, "0");
         while (position > 0) {
            char ch[2];
            ch[0] = (char) (position % 10 + '0');
            ch[1] = '\0';
            strcat(str, ch);
            position /= 10;
         }
         strcat(str, " not on list.");
         throw IndexOutOfBounds(str);
      }
      for (int i = 0; i < position; i++) {
         point = point->next;
         if (!point) {
            char str[100];
            strcpy(str, "Position ");
            if (position < 0) {
               strcat(str, "-");
               position *= -1;
            }
            else if (position == 0)
               strcat(str, "0");
            while (position > 0) {
               char ch[2];
               ch[0] = (char) (position % 10 + '0');
               ch[1] = '\0';
               strcat(str, ch);
               position /= 10;
            }
            strcat(str, " not on list.");
            throw IndexOutOfBounds(str);
         }
      }

      return point->data;
   }

   template <class T>
   T LinkedList<T>::operator[](int position) const throw (IndexOutOfBounds) {
      return getElementAt(position);
   }

   template <class T>
   void LinkedList<T>::insert(T element, int position) throw (IndexOutOfBounds) {
      if (position == 0) {
         Node<T>* temp = head;
         head = new Node<T>(element, temp);
      }
      else {
         Node<T>* point = head;
         if (!head)
            throw IndexOutOfBounds("List empty.");
         for (int i = 1; i < position; i++) {
            point = point->next;
            if (!point) {
               char str[100];
               strcpy(str, "Position ");
               if (position < 0) {
                  strcat(str, "-");
                  position *= -1;
               }
               else if (position == 0)
                  strcat(str, "0");
               while (position > 0) {
                  char ch[2];
                  ch[0] = (char) (position % 10 + '0');
                  ch[1] = '\0';
                  strcat(str, ch);
                  position /= 10;
               }
               strcat(str, " not on list.");
               throw IndexOutOfBounds(str);
            }
         }
         Node<T>* temp = point->next;
         point->next = new Node<T>(element, temp);
      }
   }

   template <class T>
   void LinkedList<T>::append(T element) {
      if (!head)
         head = new Node<T>(element);
      else {
         Node<T>* point = head;
         while (point->next)
            point = point->next;
         point->next = new Node<T>(element);
      }
   }

   template <class T>
   int LinkedList<T>::find(T value) const {
      Node<T>* point = head;
      int position = 0;
      while (point != NULL) {
         if (point->data == value)
            return position;
         position++;
         point = point->next;
      }
      return -1;
   }

   template <class T>
   T LinkedList<T>::remove(int position) throw (IndexOutOfBounds) {
      if (!head) 
         throw IndexOutOfBounds("Empty list.");
      
      Node<T> *point = head;
      if (0 == position) {
        head = head->next;
        int r = point->data;
        delete point;
        return r;
      }
      for (int i = 1; i < position; i++) {
         if (!point->next) {
            point = point->next;
            if (!point) {
               char str[100];
               strcpy(str, "Position ");
               if (position < 0) {
                  strcat(str, "-");
                  position *= -1;
               }
               else if (position == 0)
                  strcat(str, "0");
               position++;
               while (position > 0) {
                  char ch[2];
                  ch[0] = (char) (position % 10 + '0');
                  ch[1] = '\0';
                  strcat(str, ch);
                  position /= 10;
               }
               strcat(str, " not on list.");
               throw IndexOutOfBounds(str);
            }
         }
         point = point->next;
      }
      int r = point->next->data;
      Node<T>* temp = point->next;
      point->next = temp->next;
      delete temp;
      return r;
   }

   template <class T>
   bool LinkedList<T>::isEmpty() const {
      return !head;
   }

   template <class T>
   ostream& operator<< (ostream& out, const LinkedList<T>& list) {
      Node<T>* point = list.head;
      while (point) {
         out << point->data << " ";
         point = point->next;
      }
      return out;
   }
}

