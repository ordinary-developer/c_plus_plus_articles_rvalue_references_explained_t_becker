#include <memory>

class X {
    public:
        X() { }
        X(const X&) { }
        X& operator = (const X&) { return *this; }
};

template<class T>
void swap(T& a, T& b) {
    T tmp(std::move(a));
    a = std::move(b);
    b = std::move(tmp);
}


int main() {
    X a, b;
    swap(a, b);

    return 0;
}

