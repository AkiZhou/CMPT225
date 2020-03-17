
#include "Stack.h"

/*
class Stack {
    private:
        static const unsigned S_CAP 16;
        int arr[S_CAP];
        unsigned len;
    public:
        Stack();
        bool isEmpty();
        void push(int x);
        int pop();
};
*/

Stack::Stack() {
	len = 0;
}

bool Stack::isEmpty() {
    return len == 0;
}

void Stack::push(int x) {
	arr[len++] = x;
}

int Stack::pop() {
    return arr[--len];
}

