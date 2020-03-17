/*
 * List.h - Header of the List class
 *
 * Class Description: A data collection List ADT class.
 *
 * Creation Date:
 * Author:
 */

// #pragma once is shorthand for the 2 #include guards we've seen before:
// #ifndef _NODE and #define _NODE
// and it means: do not include me more than once.
#pragma once
#include "Node.h"


class List{

private:
 /*
  * Note that this is a link-based implementation of a data collection
  * List ADT class. Its underlying data structure is a singly-headed
  * singly-linked list.
  */

    int elementCount;  // Number of elements currently stored in the list.
    Node *head;        // Pointer to the first node in the list

public:
    // Constructors and Destructors

    /* Generally, if a class makes use of dynamic memory allocation,
     * we should provide at least two constructors: a default constructor and
     * a copy constructor that creates a deep copy of the given object.
     */

    // Description: Default constructor
    List();

    /* Note that the compiler will generate a copy constructor 
	 * automatically.  However, this constructor only creates a 
	 * SHALLOW COPY (so would only copy the variables elementCount 
	 * and head). It would not create a whole new set of nodes.
     * It would therefore necessary to write a constructor that 
	 * makes a DEEP COPY if our class makes use of dynamically 
	 * allocated memory.
     */

    /* Also note the parameter. C++ functions use pass-by-value by
     * default. This means that the functions make copies of the given
     * arguments. This is inefficient (particularly for large objects),
     * therefore it is normal to pass by reference (using &).
     * Also, if the parameter shall not be changed, it is good practice 
	 * to make it const.
     */
    // Description: Copy constructor to copy an existing List object.
    List(const List& lst); //copy constructor

    /* The destructor is responsible for deleting any memory that 
	 * was dynamically allocated by an object.  Destructors are 
	 * identified by the '~' preceding the class name.  There can be 
	 * only one destructor for a class, and it cannot have parameters.
	 *
	 * If there is no such memory, no destructor needs to be created 
	 * (the compiler automatically creates a default destructor). 
	 * But here it is necessary to write a destructor, because the 
	 * List class uses dynamic memory.
     */
    ~List();//destructor

    /**************************************************************************/
    // List Operations
    //
    // Description: Add an element (newElement) to the list.
    // Postcondition: A new node containing the given element is 
	//                inserted at the tail of the list.
    // Parameter: newElement is the element to be stored.
    void add(int newElement);

    // Description: Prints the contents of the list
    /*
     * Note that there is some debate about whether or not this type of
     * method belongs in a class. The argument (briefly) is that a class
     * shouldn't be responsible for I/O by "displaying" itself as it cannot
     * foresee how it is to be displayed (in a TUI or GUI environment).
     * However, such method eases testing.
	 *
     * Could also overload operator<<.
     */
    void printList();

}; // end of header file of List class
