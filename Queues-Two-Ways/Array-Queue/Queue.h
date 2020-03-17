
class Queue {
	private:
        static const unsigned Q_CAP = 8;
        int arr[Q_CAP];
        unsigned size;
        unsigned front;
        unsigned back;
	public:
		Queue();
		bool isEmpty();
		void enqueue(int x);
		int dequeue();
		int top();
};

