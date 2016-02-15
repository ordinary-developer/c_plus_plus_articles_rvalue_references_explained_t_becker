 forcing move semantics
 ======================

 if you write 

 ```c++
 a = b
 ```

 you expect the object held by a to be replace by a copy of b, and in
 the course of this replacement, you expect the object formerly held
 by a to be destructred

