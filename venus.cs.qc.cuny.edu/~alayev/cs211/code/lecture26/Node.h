// Node.h

// Note:  All function definitions are inline

#ifndef NODE_H
#define NODE_H

namespace DonathList {

   #ifndef NULL
   #define NULL 0
   #endif
   class Node {
      public:
         Node() { data = 0; next = NULL; }
         Node(int i) {data = i; next = NULL; }
         Node(int i, Node* n) {data = i; next = n; }
         
         int data;
         Node* next;
   };
}

#endif;
