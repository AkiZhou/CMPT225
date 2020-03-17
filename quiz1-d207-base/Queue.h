
#pragma once

#include "Guest.h"

// Desc:  A Queue of guests.
class Queue {
    private:
        static const unsigned Q_CAP = 8;
        Guest arr[Q_CAP];

        unsigned len;         // number of elements in the queue
        unsigned capacity;    // number of slots in the array
        unsigned frontindex;  // index the topmost element
        unsigned backindex;   // index where the next element will be placed


        // Desc:  Inserts element x (O(k)).
        //        Maintains sorted order of Queue elements.
        //        Guests with equal key are maintained in FIFO order.
        // Post:  frontindex remains unchanged.
        void  enqueueHelper(Guest x);

    public:
        // Desc:  Constructor
        Queue();
        bool isEmpty() const;


        // Desc:  Inserts element x (O(k))
        void enqueue(Guest x);


        // Desc:  Removes and returns the frontmost element (O(1))
        //  Pre:  Queue not empty
        Guest dequeue();


        // Desc:  Returns a copy of the frontmost element (O(1))
        //  Pre:  Queue not empty
        Guest top();

};

