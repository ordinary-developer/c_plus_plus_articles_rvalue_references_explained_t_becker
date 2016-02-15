#include <memory>
#include <iostream>

template <typename T, typename Arg>
std::shared_ptr<T> factory(Arg&& arg) {
    return std::shared_ptr<T>(new T(std::forward<Arg>(arg)));
}

class A { };

class X { 
public:
    X(A&) { std::cout << "A& ctor\n"; }
    X(A&&) { std::cout << "A&& ctor\n"; }
};


A foo() { return A(); }

int main() {
    A a;
    factory<X>(a);

    factory<X>(foo());

    return 0;
}
