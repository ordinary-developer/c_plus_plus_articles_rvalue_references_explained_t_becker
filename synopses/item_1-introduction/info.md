 introduction
 ============

 rvalue references solve at least two problems:
 * implementing move semantics
 * perferct forwarding

 an *lvalue* is an expression that may appear on the left 
 or on the right hand side of an assignment, whereas an *rvalue*
 is an expression that can only appear on the right hand side of 
 an assignment

 an lvalue is an expression that refers to a memory location 
 and allows us to take the address of that memory locaition via
 the & operator; an rvalue is an expression that is not an lvalue
