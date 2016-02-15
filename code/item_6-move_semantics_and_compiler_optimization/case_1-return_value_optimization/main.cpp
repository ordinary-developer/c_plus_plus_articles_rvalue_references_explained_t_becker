#include "X.hpp"

X foo() {
    X x;

    // a bad approach
    // return std::move(x) 

    // a good approach
    return x;
}

int main() {
    return 0;
}
