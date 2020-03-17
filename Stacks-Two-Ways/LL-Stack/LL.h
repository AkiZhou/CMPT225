
class LL {
	class node {
		public:
			int data;
			node * next;
	};

	private:
		node * head;
		node * tail;
		int len;
	public:
		LL();
		//void append(int x);
		void prepend(int x);
		int removeHead();
		void print();
		bool isEmpty();
		
		// Pre: i must be strictly less than the length of the list
		void set(unsigned i, int x);
		int get(unsigned i);

		void insert(unsigned i, int x);

};

