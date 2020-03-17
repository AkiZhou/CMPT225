
#include <iostream>
#include <string>
#include "Queue.h"
#include "Guest.h"


using namespace std;

int main () {
    int N = 2;

    string names[12] = { "Aaron", "Beatrice", "Chris", "Dean", "Eunice", "Freda", "Greg", "Ho", "Isaac", "Jin", "Keith", "Les" };
    int keys[12] = { 6, 2, 10, 5, 1, 9, 7, 4, 8, 12, 3, 11 };
    
    // Case 1:
    {
        Queue Q;
        
        for (int i = 0; i < 4; i++) {
            Q.enqueue(Guest(names[i], keys[i]));
        }

        string expected[4] = { "Beatrice", "Dean", "Aaron", "Chris" };

        for (int i = 0; i < 4; i++) {
            Guest ans = Q.dequeue();
            if (ans.Name() != expected[i]) {
                cout << "Failed Test Case 1" << endl;
                return 0;
            }
        }
    }



    cout << "Pass" << endl;

    return 0;
} // main

