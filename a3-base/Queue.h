

// Class Invariant:  FIFO order
 

/* None of the provided code (basecode) may be modified. */


#pragma once

#include "Node.h"
#include "EmptyDataCollectionException.h"

#include <cstdio>

using namespace std;

template <class T>
class Queue {
    private:


        /* you choose your implementation */


        
    public:

        // Desc: Constructor. (O(1))
        Queue();


        // Desc: Returns true if Queue is empty. (O(1))
        bool isEmpty() const;

   
        // Desc: Inserts x at the "back" of this Queue. (O(1))
        void enqueue(const T& x);

   
        // Desc: Removes the element at the "front". (O(1))
        //  Pre: Queue not empty.
        //       Throws EmptyDataCollectionException if Queue empty.
        void dequeue() throw(EmptyDataCollectionException);
   

        // Desc: Returns the element at the "front". (O(1))
        //  Pre: Queue not empty.
        //       Throws EmptyDataCollectionException if Queue empty.
        // Post: Queue is unchanged.
        T& peek() const throw(EmptyDataCollectionException);  



        /* you may add more methods */


};


// Desc: Constructor. (O(1))
template <class T>
Queue<T>::Queue() {
} // constructor



// Desc: Returns true if Queue is empty. (O(1))
template <class T>
bool Queue<T>::isEmpty() const {
} // isEmpty



// Desc: Inserts x at the "back" of this Queue. (O(1))
template <class T>
void Queue<T>::enqueue(const T& x) {
} // enqueue



// Desc: Removes the element at the "front". (O(1))
//  Pre: Queue not empty.
//       Throws EmptyDataCollectionException if Queue empty.
template <class T>
void Queue<T>::dequeue() throw(EmptyDataCollectionException) {
} // dequeue



// Desc: Returns the element at the "front". (O(1))
//  Pre: Queue not empty.
//       Throws EmptyDataCollectionException if Queue empty.
// Post: Queue is unchanged.
template <class T>
T& Queue<T>::peek() const throw(EmptyDataCollectionException) {
} // peek


