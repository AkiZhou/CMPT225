
#include <iostream>
#include "List.h"


using namespace std;

int main () {
    List L(5);

    L.print();

    for (int i = 0; i < 5; i++) {
        L.set(i, i*3);
    } // for

    L.print();

    for (int i = 0; i < 5; i++) {
        L.append(90 + 2*i);
        L.print();
    } // for
    
    for (int i = 0; i < 5; i++) {
        L.remove(i);
        L.print();
    } // for
    
    return 0;
} // main

