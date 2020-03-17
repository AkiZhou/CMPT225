
#include "Queue.h"


// Desc:  Constructor
Queue::Queue() : size(0), capacity(INITIAL_SIZE), frontindex(0), backindex(0) {
} // constructor


// Desc:  Inserts element x at the back (O(1))
void Queue::enqueue(int x) {
    size++;
    arr[backindex] = x;
    backindex = (backindex + 1) % capacity;
} // enqueue


// Desc:  Removes the frontmost element (O(1))
//  Pre:  Queue not empty
void Queue::dequeue() {
    size--;
    frontindex = (frontindex + 1) % capacity;
} // dequeue


// Desc:  Returns a copy of the frontmost element (O(1))
//  Pre:  Queue not empty
int Queue::peek() const {
    return arr[frontindex];
} // top


// Desc:  Returns true if and only if queue empty (O(1))
bool Queue::isEmpty() const {
    return size == 0;
} // isempty




