class X {
    public:
        // a dump default constructor
        X() { }

        // a dump copy constructor
        X(const X& rhs) { }

        // a dump copy assignment operator
        X& operator= (const X& rhs) { return *this; }
};

template<class T>
void swap(T& a, T& b) {
    T tmp(a);
    a = b;
    b = tmp;
}


int main() {
    X a, b;
    swap(a, b);

    return 0;
}
