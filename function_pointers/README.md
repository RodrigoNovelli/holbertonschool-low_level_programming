In this directory we are going to apply pointers to function. 

A pointer to a function is a pointer that points to the first instruction of a function. Instead of pointing to a memory space, its points to a fragment of code.

How to declare a pointer function:
	  void (*fp)(int);
		fp = func;
Notice that we use "()" because without it we are declaring a function that returns a void pointer.
	  void *fp(int) -> This could be a function that takes an int and "return" a void pointer.

We can use pointer tu functions to recall a function, and we could make an array of pointers, so changing the value of the space of the array we can acces to different pointers of functions that are one after the other.

Pointers to functions are important to not write duplicated code.
