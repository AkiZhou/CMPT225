
#include <iostream>
#include "Queue.h"


using namespace std;

int main () {
    Queue Q;

    for (int i = 0; i < 5; i++) {
        Q.enqueue(i*3);
    } // for

	while (!Q.isEmpty()) {
		cout << Q.dequeue() << ' ';
	}
	cout << endl;


    for (int i = 0; i < 5; i++) {
        Q.enqueue(i*3);
    } // for

	while (!Q.isEmpty()) {
		cout << Q.dequeue() << ' ';
	}
	cout << endl;


    return 0;
} // main

