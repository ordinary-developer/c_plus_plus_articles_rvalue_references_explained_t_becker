class X { };

X foobar() { return X(); }

void foo(X&& x) { }


int main() {
    foo(foobar());
    foo(X());
    
    X x();
    // an error will occur
    foo(x);

    return 0;
}

