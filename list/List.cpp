
#include <iostream>
#include "List.h"

using namespace std;



List::List(unsigned len) : len(len), arr(new int[len]) {
    // arr = new int[len];
} // List



void List::set(unsigned index, int x) {
    if (index < len) {
        arr[index] = x;
    }
} // set


                
int List::get(unsigned index) {
    if (index < len) {
        return arr[index];
    }
} // get



void List::append(int x) {
    resize(len + 1);  // side effect: len increases by 1
    arr[len-1] = x;
} // append



void List::trunc(unsigned newlen) {
    if (newlen < len) {
        len = newlen;
    }
} // trunc



void List::remove(unsigned index) {
    if (index < len) {
        len--;
        for (int i = index; i < len; i++) {
            arr[i] = arr[i+1];
        }
    }
} // remove



void List::resize(unsigned newlen) {
    if (newlen < len) {
        trunc(newlen);
    } else if (newlen > len) {
        // create a new list 
        int *newarr = new int[newlen];

        // copy old list -> new list
        for (int i = 0; i < len; i++) {
            newarr[i] = arr[i];
        }

        // change array length
        len = newlen;
    
        // recycle
        delete [] arr;
        arr = newarr;
    }
} // resize



void List::print() {
    for (int i = 0; i < len; i++) {
        cout << arr[i] << ' ';
    }
    cout << endl;
} // print

