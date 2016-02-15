 perfect forwarding: the solution
 ================================

 C++11 introduces the following reference collapsing rules

 first rule
 ----------
 * A& &   becomes A&
 * A& &&  becomes A&
 * A&& &  becomes A&&


 second rule
 -----------
 there is a special template argument deduction rule for function 
 templates that take an argument by rvalue reference to a template
 argument:

 ```c++
 teplate<typename T>
 void foo(T&&);
 ```

 Here, the following apply:
 * when foo is called on an lvalue of type A, then T resolves to A&
   and hence, by the reference collapsing rules above, the argument
   effectively becomes A&
 * when foo is called on an rvalue of type A, then T resolves to A,
   and hence the argument type becomes A&&
