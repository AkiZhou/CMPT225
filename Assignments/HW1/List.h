/**
 * @file List.h
 * @version 1.0
 * Class Description: List data collection ADT.
 * Class Invariant: Data collection with the following characteristics:
 *                   - Each element is unique (no duplicates).
 *                   - (What other characteristic does our List have?)
 *
 * Created by Aki Zhou on 2019/01/11.
 * Copyright © 2019 Aki Zhou, Roy Ataya. All rights reserved.
 */

#pragma once

#include <iostream>
#include "Patient.h"

using namespace std;

class List  {

private:

/*
 * You can add more attributes to this class,
 * but you cannot remove the attributes below
 * nor can you change them.
 */

    static const int MAX_ELEMENTS = 5; // Small capacity so can test when data collection becomes full
    // ***As we are testing the code of our assignment, we can
    //    change the value given to this constant.***
    Patient elements[MAX_ELEMENTS];    // Data structure with capacity of MAX_ELEMENTS
    int elementCount;                  // Current element count in element array
    int capacity;                      // Actual maximum capacity of element array

    //void update();

public:

/*
 * You can add more methods to this interface,
 * but you cannot remove the methods below
 * nor can you change their prototype.
 */

    // Default constructor
    List();

    // Description: Returns the total element count currently stored in List.
    int  getElementCount() const;

    // Description: Insert an element.
    // Precondition: newElement must not already be in data collection.
    // Postcondition: newElement inserted and elementCount has been incremented.
    bool insert( const Patient& newElement);

    // Description: Remove an element.
    // Postcondition: toBeRemoved is removed and elementCount has been decremented.
    bool remove( const Patient& toBeRemoved );

    // Description: Remove all elements.
    void removeAll();

    // Description: Search for target element.
    //              Returns a pointer to the element if found,
    //              otherwise, returns NULL.
    Patient* search(const Patient& target);

    // Description: Modify information for target element.
    //              Returns true if successful otherwise returns false
    bool modify(Patient& targetPatient, const unsigned int item, const string value);

    // Description: Print all elements.
    // Postcondition: all elements are printed in ascending order according to the care card number
    void print();

}; // end List.h