
#include "Queue.h"


Queue::Queue() {
}

bool Queue::isEmpty() {
	return list.isEmpty();
}

void Queue::enqueue(int x) {
	list.append(x);
}

int Queue::dequeue() {
	return list.removeHead();
}

int Queue::top() {
	return list.get(0);
}

