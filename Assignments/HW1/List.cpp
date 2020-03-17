/**
 * @file List.cpp
 * @version 1.0
 * This is the implementation file for the class List
 *
 * Created by Aki Zhou on 2019/01/11.
 * Copyright © 2019 Aki Zhou, Roy Ataya. All rights reserved.
 */

#include "List.h"

// Default constructor
List::List() {
    elementCount = 0;
    capacity = MAX_ELEMENTS;
}

// Description: Returns the total element count currently stored in List.
int List::getElementCount() const {
    return elementCount;
}

// Description: Insert an element.
// Precondition: newElement must not already be in data collection.
// Postcondition: newElement inserted and elementCount has been incremented.
bool List::insert(const Patient& newElement) {

    // When the list is empty
    if(elementCount == 0) {
        elements[0] = newElement;
        elementCount++;
        return true;
    }
    else if(elementCount == MAX_ELEMENTS) {
        // When the list is full
        cout << "The list is full\n\n";                                             ///////
        return false;
    }

    // Check if the newElement exists in list
    // if it does, return false otherwise proceed
    int index = 0;
    for(int i = 0; i < elementCount; i++) {

        if(elements[i] == newElement){ //elements[i].getCareCard() == newElement.getCareCard()
            cout << "Patient already exists in the list\n\n";                              ////////
            return false;
        }
        else if(elements[i] > newElement) {
            break;
        }
        else {
            index++;
        }
    }

    // Shift elements
    for(int i = elementCount; i > index; i--) {
        elements[i] = elements[i-1];
    }

    elements[index] = newElement;
    elementCount++;

    return true;
}

// Description: Remove an element.
// Postcondition: toBeRemoved is removed and elementCount has been decremented.
bool List::remove( const Patient& toBeRemoved ) {
    // When the list is empty
    if(elementCount == 0) {
        cout << "The list is already empty\n\n";                                    //////
        return false;
    }

    // Check if the toBeRemoved exists in list
    // if it does, proceed otherwise return false
    int index = 0;
    for(int i = 0; i < elementCount; i++) {
        if(elements[i] == toBeRemoved) {
            index = i;
            break;
        }
        else if(i == elementCount - 1) {
            cout << "The patient does not exist in the list\n\n";
            return false;
        }
    }

    Patient empty;                                                                      //////

    if(index == (elementCount - 1)) {
        // For when the list is full
    }
    else {
        // Shift elements
        for(int i = index; i < elementCount; i++) {
            elements[i] = elements[i+1];
        }
    }

    elementCount--;

    return true;
}

// Description: Remove all elements.
void List::removeAll() {

    if(elementCount == 0) {
        cout << "The list is already empty\n\n";                                             /////
    }

    Patient empty;

    for(int i = 0; i < elementCount; i++) {
        elements[i] = empty;
    }

    elementCount = 0;

    return;
}

// Description: Search for target element.
//              Returns a pointer to the element if found,
//              otherwise, returns NULL.
Patient* List::search(const Patient& target) {

    if(elementCount == 0) {
        cout << "The list is empty\n\n";                                            ////////
        return NULL;
    }

    Patient *patientPointer;

    for(int i = 0; i < elementCount; i++) {
        if(elements[i] == target) {
            patientPointer = &elements[i];
            return patientPointer;
        }
    }

    return NULL;
}

// Description: Modify information for target element.
//              Returns true if successful otherwise returns false
bool List::modify(Patient& target, const unsigned int item, const string value) {
    /*
    // Version 1
    if(elementCount == 0) {
        cout << "The list is empty\n\n";                                        //////////
        return false;
    }

    // Check if patient in list
    if( !(search(target)) ) {
        cout << "The patient does not exist in the list\n\n";
        return false;
    }

    remove(target);

    switch(item) {
        case 1:
            target.setName(value);
            break;
        case 2:
            target.setAddress(value);
            break;
        case 3:
            target.setPhone(value);
            break;
        case 4:
            target.setEmail(value);
            break;
        default:
            cout << "The option does not exist\n\n";
    }

    insert(target);

    */

    // Version 2
    if(elementCount == 0) {
        cout << "The list is empty\n\n";                                        //////////
        return false;
    }

    Patient *pNew = search(target);

    if(!pNew) {
        cout << "The patient does not exist in the list\n\n";
        return false;
    }

    switch(item) {
        case 1:
            target.setName(value);
            break;
        case 2:
            target.setAddress(value);
            break;
        case 3:
            target.setPhone(value);
            break;
        case 4:
            target.setEmail(value);
            break;
        default:
            cout << "The option does not exist\n\n";
    }

    *pNew = target;

    return true;
}

// Description: Print all elements.
// Postcondition: all elements are printed.
void List::print() {

    if(elementCount == 0) {
        cout << "The list is empty\n\n";                                                    /////
    }
    else {
        for(int i = 0; i < elementCount; i++) {

            cout << elements[i] << endl;
        }
    }

    return;
}