/*
 * List.cpp - Implementation of the List class
 *
 * Class Description: A data collection List ADT class.
 *
 * Creation Date:
 * Author:
 */

#include "List.h"
#include <string>
#include <iostream>

using namespace std; // Needed for cout, cin to be recognized


// Description: Default constructor
List::List(){
	elementCount = 0;
	head = NULL;

    cout << "Default constructor called\n";
}  // default constructor



// Description: Copy constructor to copy an existing List object.
List::List(const List& lst){
    /*
     * // Shallow copy
     * elementCount = lst.elementCount;
	 *  head = lst.head;
     */

    // Deep copy
    head = NULL;
    Node * current = lst.head;

    while(elementCount != lst.elementCount){
       this-> add(current->data);
        current = current->next;
    }

    cout << "Copy constructor called\n";
}  // copy constructor



// Description: Destructor.  Recycle all dynamic memory allocated.
List::~List(){

    Node * toDelete;

    while(head){
        toDelete = head;
        head = head->next;
        delete toDelete;
    }

    cout << "Destructor called!" << endl;
}  // destructor



/************************/
// List Operations
/************************/


// Description: Add an element (newElement) to the list.
void List::add(int newElement){
	Node *newNode = new Node(newElement); //new Node with x

	// Check to see if list is empty
	if (head == NULL){
		// Make new Node the new head
		head = newNode;
	} else {
		// Move to the end of the list
		Node* current = head;
		while (current->next != NULL){
			current = current->next;
		}
		current->next = newNode;
	}

	elementCount++;
} //  add


// Description: Prints the contents of the list
void List::printList(){
	Node *current = head;
	cout << "{"; //Nice format!
	// Traverse the list
	while (current != NULL){
		cout << current -> data; // Print data
		current = current -> next; // Go to next Node
		if (current != NULL){
			cout << ","; // Print a comma unless at the end of the list
		}
	}
	cout << "}"; // Don't print a newline - it might not be wanted
}  // printList

