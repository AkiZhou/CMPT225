
class List {
    private:
        int *arr;
        unsigned len;
    
        void resize(unsigned newlen);
    public:
        List(unsigned len);
        void set(unsigned index, int x);
        int get(unsigned index);
        void append(int x);
        void trunc(unsigned newlen);
        void remove(unsigned index);

        void print();
    
};

