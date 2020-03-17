/*
 * PriorityQueue.h
 *
 * Description: Priority Queue
 * Class Invariant: The elements stored in this Priority Queue are always sorted.
 *
 * Author: Inspired by Frank M. Carrano and Tim Henry (textbook).
 * Modified: February 2019
 *
 */



/* None of the provided code (basecode) may be modified. */



#pragma once

#include "Node.h"
#include "EmptyDataCollectionException.h"

#include <cstdio>

using namespace std;


template <class T>
class PriorityQueue {

    private:
        // singly-linked list
        Node<T>* head;
        int len;


        /* You may add private methods to this class */


    public:
        // Desc: Default Constructor. (O(1))
        PriorityQueue();
 

        // Desc: Copy Constructor. (O(N))
        PriorityQueue(const PriorityQueue& rhs);


        // Desc: Destructor. (O(N))
        ~PriorityQueue();


        // Desc: Returns true if Priority Queue empty. (O(1))
        bool isEmpty() const;


        // Desc: Returns length of the Priority Queue. (O(1))
        int getLength() const;


        // Desc: Inserts x in sorted order. (O(N))
        //  Pre: Priority Queue is sorted.
        // Post: Priority Queue remains sorted.
        void enqueue(const T& x);
    

        // Desc: Removes the element with "highest" priority. (O(1))
        //  Pre: Priority Queue not empty.
        //       Throws EmptyDataCollectionException if Priority Queue empty.
        void dequeue() throw(EmptyDataCollectionException);


        // Desc: Returns the element with the "highest" priority. (O(1))
        //  Pre: Priority Queue not empty.
        //       Throws EmptyDataCollectionException if Priority Queue empty.
        // Post: Priority Queue is unchanged.
        T& peek() const throw(EmptyDataCollectionException);

}; // PriorityQueue


