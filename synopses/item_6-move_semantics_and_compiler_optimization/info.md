 move semantics and compiler optimization
 ========================================

 any modern compiler will apply *retrun value optimization* 
 to the original function definition

 rather than constructing an X locally and then copying it out,
 the compiler would construct the X object directly at the location
 of function's return value
