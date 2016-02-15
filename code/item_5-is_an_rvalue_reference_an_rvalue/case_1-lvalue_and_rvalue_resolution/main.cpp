#include <iostream>
#include <memory>

class X {
public:
    X() {
        std::cout << "default ctor\n"; 
    }

    X(const X&) { 
        std::cout << "copy ctor\n"; 
    }

    X& operator= (const X&) { 
        std::cout << "copy assignment operator\n";
	return *this;
    }

    X(const X&&) {
        std::cout << "move ctor\n";
    }

    X& operator= (const X&&) {
        std::cout << "move assignment operator\n";
	return *this;
    }
};

void foo(X&& x) {
    X anotherX = x;
}

X&& goo() { return std::move(X()); }

int main() {
    X x1;
    foo(std::move(x1));
    std::cout << "----------\n";

    X x2 = goo();

    return 0;
}
