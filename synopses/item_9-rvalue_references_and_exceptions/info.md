 rvalue references and exceptions
 ================================

 when you overload the copy constructor and the copyt assignment 
 operator of a class for the sake of move semantics, 
 it is very recommended:
 * strive to write your overload in such a way that they cannot
   throw exceptions
 * if you succeeded in not throwing exceptions from you overloads,
   then make sure to advertise that fact using the new
   "noexcept" keyword
