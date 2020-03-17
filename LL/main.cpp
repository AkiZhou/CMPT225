
#include <iostream>
#include "LL.h"


using namespace std;

int main () {
    LL L;

    L.print();
    
    for (int i = 0; i < 5; i++) {
        L.append(i*3);
        L.print();
    } // for

    for (int i = 0; i < 8; i++) {
        L.set(i, 10-i);
        L.print();
    } // for

    for (int i = 0; i < 5; i++) {
        L.insert(2*i, i*i);
        L.print();
	}

    return 0;
} // main

