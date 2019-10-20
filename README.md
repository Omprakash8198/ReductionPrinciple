# ReductionPrinciple
Program to demonstrate reduction principle of problem solving in string domain

In computability theory and computational complexity theory, a reduction is an algorithm for transforming one problem into another problem.
The idea behind a reduction is that you have two problems A and B.  You know how to solve B, but you're stuck on A.  Then you realize that there's a trick you can use to transform instances of problem A into instances of problem B in such a way that you can get the solution to the original problem instance from the transformed problem instance.

Reductions matter for computational complexity theory because if you can solve problem A using an algorithm for problem B, then it's reasonable to say that problem B is at least as hard as problem A.  That gives you a preorder on the class of all problems, and you can turn it into a partial order by identifying collections of problems that all reduce to each other.

Program Implementation

The file strncpy.c contains a strncpy method which is formed by reduction principle i.e by reduced it into strcpy function.
It is done by simply changing the while condition. 
strncpy.c is verified by using input which is placed in strncpy.txt file.

The file strcat.c contains a strcat method which is formed by reducing it into strcpy and strlen functions.
It is done by first using strlen function which is used to reach last vacant position of string into which we want to concatenate.
Then second string is copied into first string.

The file strncat.c contains a strncat method which is formed by reducing it into strcpy and strlen functions.
It is done same as strcat method but here while condition of strcpy is changed.
strncat.c is verified by using input which is placed in strncat.txt file.

The file strncmp.c contains a strncmp method which is formed by reducing it into strcmp function.
It is done by simply changing the while condition. 
strncmp.c is verified by using input which is placed in strncmp.txt file.

