 is an rvalue reference an rvalue?
 =================================

 things that are declared as rvalue reference can be lvalues or
 rvalues; the distinguishing criterion is: if it has name, then it is
 an lvalue, otherwise, it is an rvalue

 std::move "turns its argument into an rvalue even if it isn't",
 and achieves that by "hiding the name"
