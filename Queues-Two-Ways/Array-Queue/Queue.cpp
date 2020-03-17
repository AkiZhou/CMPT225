
#include "Queue.h"

// front: index of first item
// back: index of next item to be enqueued

Queue::Queue() {
	size = 0;
	front = 0;
	back = 0;
}

bool Queue::isEmpty() {
	return size == 0;
}

void Queue::enqueue(int x) {
	size++;
	arr[back] = x;
	back = (back + 1) % Q_CAP;
}

int Queue::dequeue() {
	size--;
	int ret = arr[front];
	front = (front + 1) % Q_CAP;
	return ret;
}

int Queue::top() {
	return arr[front];
}

