You can take solace, though, in the thought that 
in your day-to-day programming, you will only have
to remember three things about rvalue references:

* by overloading a function like this:
  void foo(X& x); // lvalue reference overload
  void foo(X&& x); // rvalue reference overload
  you can branch at compile time on the condition 
  "is foo being called on an lvalue or an rvalue?"
  The primary (and for all practical purposes, the only)
  application of that is to overload the copy constructor 
  and copy assignment operator of a class for the sake 
  of implementing move semantics.
  If and when you do that, make sure to pay attention to 
  exception handling, and use the new noexcept keyword
  as much as you can. 
* std::move turns its argument into an rvalue.
* std::forward allows you to achieve perfect forwarding 
  if you use it exactly as shown in the factory function example in Section 8.