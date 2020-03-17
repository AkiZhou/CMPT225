
#include "Queue.h"

#include <cassert>

using namespace std;


// Desc:  Constructor
Queue::Queue() {
    len = 0;
    capacity = Q_CAP;
    frontindex = 0;
    backindex = 0;
} // constructor


bool Queue::isEmpty() const {
    return len == 0;
} // isEmpty


// Desc:  Inserts element x (O(k))
void Queue::enqueue(Guest x) {
    unsigned before = frontindex;
    enqueueHelper(x);
    unsigned after = frontindex;
    assert(before == after);
} // enqueue


// Desc:  Removes and returns the frontmost element (O(1))
//  Pre:  Queue not empty
Guest Queue::dequeue() {
    len--;
    Guest ret = arr[frontindex];
    frontindex = (frontindex + 1) % Q_CAP;
    return ret;
} // dequeue


// Desc:  Returns a copy of the frontmost element (O(1))
//  Pre:  Queue not empty
Guest Queue::top() {
    return arr[frontindex];
} // top



// Desc:  Inserts element x (O(k)).
//        Maintains sorted order of Queue elements.
//        Guests with equal key are maintained in FIFO order.
// Post:  frontindex remains unchanged.
void Queue::enqueueHelper(Guest x) {
} // enqueueHelper

