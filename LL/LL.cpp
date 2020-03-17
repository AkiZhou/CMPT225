
#include "LL.h"
#include <iostream>

using namespace std;

/*
	class node {
		public:
			int data;
			node * next;
	};
*/

LL::LL() : head(NULL), tail(NULL), len(0) {
} // constructor


void LL::append(int x) {
	node * newnode = new node;

	newnode->data = x;
	newnode->next = NULL;

	if (tail) {
		tail->next = newnode;
		tail = newnode;
	} else {
		// empty list
		head = newnode;
		tail = newnode;
	}

	len++;
} // append


void LL::print() {
	node * curr;

	curr = head;

	while (curr) {
		cout << curr->data << ' ';
		curr = curr->next;
	}
	cout << endl;
} // print


/*
void LL::insert(unsigned i, int x) {
	node * curr;
	node * prev;

	node * newnode = new node;
	newnode->data = x;

	if (head == NULL && tail == NULL) {
		// empty list
		head = newnode;
		tail = newnode;
		newnode->next = NULL;
		return;
	}

	if (i == 0) {
		// splice before head (new head)
		newnode->next = head;
		head = newnode;
		return;
	}

	prev = head;
	curr = head->next;

	while (curr && --i) {
		curr = curr->next;
		prev = prev->next;
	}

	if (curr) {
		prev->next = newnode;
		newnode->next = curr;
	} else {
		// splice at end (new tail)
		prev->next = newnode;
		tail = newnode;
	}

} // insert
*/


void LL::insert(unsigned i, int x) {
	node * prev;

	node * newnode = new node;
	newnode->data = x;

	if (head == NULL && tail == NULL) {
		// empty list
		head = newnode;
		tail = newnode;
		newnode->next = NULL;
		return;
	}

	if (i == 0) {
		// splice before head (new head)
		newnode->next = head;
		head = newnode;
		return;
	}

	prev = head;

	while (prev->next && --i) {
		prev = prev->next;
	}

	if (prev->next) {
		newnode->next = prev->next;
		prev->next = newnode;
	} else {
		// splice at end (new tail)
		prev->next = newnode;
		tail = newnode;
	}

} // insert


void LL::set(unsigned i, int x) {
	if (i >= len) return;

	node * curr;

	curr = head;

	while (curr && i) {
		curr = curr->next;
		i--;
	}

	if (curr) {
		curr->data = x;
	}
} // set


int LL::get(unsigned i) {
	if (i >= len) return 0;

	node * curr;

	curr = head;

	while (curr && i) {
		curr = curr->next;
		i--;
	}

	if (curr) {
		return curr->data;
	}
} // set


