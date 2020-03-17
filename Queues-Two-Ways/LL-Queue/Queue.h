
#include "LL.h"

class Queue {
	private:
		LL list;
	public:
		Queue();
		bool isEmpty();
		void enqueue(int x);
		int dequeue();
		int top();
};

