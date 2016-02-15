#include <iostream>

class X { };

//lvalue reference overload
void foo(X& x) { 
    std::cout << "foo(X&)" << std::endl;
}

//rvalue reference overload
void foo(X&& x) {
    std::cout << "foo(X&&)" << std::endl;
}

X foobar() { return X(); }

int main() {
    X x;

    // argument is lvalue: calls foo(X&)
    foo(x);

    // argument is rvalue: calls foo(X&&)
    foo(foobar());

    return 0;
}
