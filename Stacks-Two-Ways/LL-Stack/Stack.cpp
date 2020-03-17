
#include "Stack.h"

/*
class Stack {
	private:
		LL list;
	public:
		Stack();
		bool isEmpty();
		void push(int x);
		int pop();
};
*/

Stack::Stack() {
}

bool Stack::isEmpty() {
	return list.isEmpty();
}

void Stack::push(int x) {
	list.prepend(x);
}

int Stack::pop() {
	return list.removeHead();
}

