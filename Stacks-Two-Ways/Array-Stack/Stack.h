
class Stack {
	private:
		static const unsigned S_CAP = 16;
		int arr[S_CAP];
		unsigned len;
	public:
		Stack();
		bool isEmpty();
		void push(int x);
		int pop();
};

