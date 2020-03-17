/*
 * List.h - Header of the List class
 *
 * Class Description: Unsorted List data collection ADT class. 
 *
 * Creation Date: 
 * Author: 
 */
 
 /* NOTE: This is a link-based implementation of a List ADT class.
 *        Its underlying data structure is a singly-headed singly-linked list (SHSL).   
 */

// #pragma once is shorthand for the 2 #include guards we've seen before:
// #ifndef _NODE and #define _NODE
// and it means: do not include me more than once.
#pragma once
#include "Node.h"


class List{

private:
    int elementCount;  // Number of elements currently stored in the List.
	Node *head;        // Pointer to the first node in the List.

public:
	// Constructors and Destructors

	/* Generally, every class that makes use of dynamically allocated memory
	 * should have at least two constructors:
	 *   - a default constructor and 
	 *   - a copy constructor that creates a distinct copy of the given object
	 * (even if the client code does not make use of all of these constructors).
	 */

	// Description: Default constructor
	List(); 
	
		
	/* Note that the compiler will generate a copy constructor automatically.  
	 * However, this constructor only creates a SHALLOW COPY (so would only copy the
	 * elementCount and head variables). In this case, this would NOT CREATE A
	 * NEW LIST object, just a new reference to "this" List object.  
	 * It is therefore necessary to write a constructor that makes a DEEP COPY
	 * if our class makes use of dynamically allocated memory.
	 */

	/* Also note the parameter. C++ functions use pass-by-value by
	 * default. This means that the functions make copies of the given
	 * arguments. This is inefficient (particularly for large objects).
	 * Therefore it is normal to pass a reference, (using &) of the parameter,
	 * called an "alias".
	 * Furthermore, if the parameter cannot be changed, it is good programming practice 
	 * to indicate so by using the keyword "const". This keyword prevents it from being changed,
	 * i.e., the compiler will complaint if the code tries to change the value of the parameter.
	 */
 
	// Description: Copy constructor to copy an existing List object. 
	List(const List& lst);
	 
	
	/* The destructor is responsible for deleting any memory that was dynamically
	 * allocated by an object. If there is no such memory, no destructor needs to
	 * be created (the compiler automatically creates one). 
	 * Because this class makes use of dynamically allocated memory
	 * i.e., uses pointers when new Node objects are instantiated, it is necessary to write 
	 * a destructor. Destructors are identified by the "~" preceding the class name.
	 * There can be only one destructor for a class, and it cannot have parameters. 
	 */
	// Description: Destructor.
	~List();


	/**************************************************************************/
	// List Public Interface 
	
	// Description: Returns the number of elements in the List.
	int getElementCount() const;

    // Description: Adds an element "newElement" at the front of the List.
	//              Returns true if "newElement" has been added to the List, false otherwise.
	bool add(int newElement);
	
	// Description: Removes The first instance of "toBeRemoved" from the List.
	//              Returns true if "toBeRemoved" is found and removed, false otherwise.
	// PreCondition: List is not empty.
	bool remove(int toBeRemoved);
	
	// Description: Empties the List, freeing up dynamically allocated memory.
	// PreCondition: List is not empty.
	void removeAll();

	// Description: Prints the contents of the List from the first to the last element.
	/* 
	 * Note that there is some debate about whether or not this type of
	 * method belongs in a class. The argument (briefly) is that a class
	 * shouldn't be responsible for I/O by "displaying" itself as it cannot 
	 * foresee how it is to be displayed (in a TUI or GUI environment?).
	 * However, such method eases testing.
	 * For testing purpose, unless required by client in problem statement.
	 * Could also overload operator<<. 
	 */
	void printList();

}; // end of header file of List class