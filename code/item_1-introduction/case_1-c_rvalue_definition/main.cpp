int main() {
    int a = 42;
    int b = 43;

    // a and b are both l-values
    a = b;
    b = a;
    a = a * b;

    // a * b is an rvalue
    int c = a * b; // ok, rvalue on right hand side of assignment
    // error, rvalue on left hand side of assingment
    // a * b = 42; 

    return 0;
}
