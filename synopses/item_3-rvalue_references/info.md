 rvalue references
 =================

 if x is any type, then X&& is called an rvalue reference to X,
 the ordinary reference X& is now called an lvalue reference

 rvalue reference allow a function to branch at compile time
 (via overload resoulution) on the condition
 "Am I being called on an lvalue or an rvalue?"

 in the ovewhelming majority of cases, this kind of overload should
 occur only for copy constructors and assignment operators


 if you implement

 ```c++
 void foo(X&&);
 ```

 but neither one of

 ```c++
 void foo(X&);
 ```

 and 

 ```c++
 void foo(const X&);
 ```

 then `foo` can be called on r-values, but trying to call it on an
 l-value will trigger a compile error
