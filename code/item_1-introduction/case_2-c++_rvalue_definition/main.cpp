int main() {
    // lvalues:
    int i = 42;
    i = 43; // ok, i is an lvalue
    int* p = &i; // ok, i is an lvalue

    // a very strange code
    // int& foo();
    // foo() = 42; // ok, foo() is an lvalue
    // int* p1 = &foo(); // ok, foo() is an lvalue

    // rvalues:
    int foobar() { return 0; };
    int j = 0;
    j = foobar(); // ok, foobar() is an rvalue
    // error, can't take the address of an rvalue
    // int* p2 = &foobar(); 

    return 0;
}
