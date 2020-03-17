
#include <iostream>
#include "Stack.h"


using namespace std;

int main () {
    Stack S;

    for (int i = 0; i < 5; i++) {
        S.push(i*3);
    } // for

	while (!S.isEmpty()) {
		cout << S.pop() << ' ';
	}
	cout << endl;


    for (int i = 0; i < 5; i++) {
        S.push(i*3);
    } // for

	while (!S.isEmpty()) {
		cout << S.pop() << ' ';
	}
	cout << endl;


    return 0;
} // main

