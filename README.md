# Matrix-Multiplication
The Program:
For this assignment, you will multiply two matrices and print the result.  If A is an m x n matrix, and B is an n x p matrix, then the product matrix C, which is A x B, is defined to be the m x p matrix whose entry in the ith row and the jth column is the sum of the products of corresponding entries of the ith row of A and the jth column of B.  A standard algorithm is:

for(int i=0; i < m; i++)
    for(int j=0; j < p; j++) {
        C[i][j] = 0;
        for(int k=0; k < n; k++)
            C[i][j] += A[i][k] * B[k][j];
        }
  

Input:
Input will come from a text file, and the name of the file must be read from the command line.  The text file will take the following form.  The first three lines of the file contain the values m, n, and p, each on a line by themselves.  Following are two matrices, A followed by B with no blank lines, of the dimensions specified, one row per line.  Each row entry is separated by a space.   Example:  Given the following two matrices A and B:

A = |1 2|     B = |3|
                  |4|
The datafile will then have this format:

1
2
1
1 2
3
4
Header File:
For this assignment, you must use the header file p2.h provided by the instructor.  You may get a copy of this file here:  p2.h Download p2.h

You are required to implement the three functions in this header file, and you may not create any additional functions in your program.  You must include this header file in your p2.c program as follows:

#include "p2.h"

No other #include directives are permitted in your p2.c program file.  You must not modify the header file in any way.  The original version will be used to compile your program.

 

Output:
Your program will print the two matrices to be multiplied, and finally print the resulting matrix.  Each of the three matrices should be labeled.  Example:
 

Matrix A contents:
    1    2
    3    4
    5    6

Matrix B contents:
    7    8    9   10
   11   12   13   14

Matrix A * B is:
   29   32   35   38
   65   72   79   86
  101  112  123  134

 

Note--The datafile read for the above example is:
3
2
4
1 2
3 4
5 6
7 8 9 10
11 12 13 14

 

Additional Requirements:
You may not use any brackets [ ] in your code.   Array elements must be referenced using pointer arithmetic.
The matrices A, B, and C must be declared as single integer pointer variables.  int *A, *B, *C;
No error checking is required for this assignment. You may assume that any datafile used for testing will contain only integer values in the format specified in the assignment.
Your source code file will be compiled using the instructor's copy of p2.h with gcc version 4.8.5 and should run (identically) in Gradescope and on edoras (for your testing purposes).  The command is as follows:
gcc -ansi -Wall -o p2 p2.c
Your p2.c program file must consist of  exactly four functions -- a main function, plus the three functions defined in the header file.\
Your program MUST contain a comment (not a print statement) with the following identifying information:
Program #2, csscxxxx, Firstname Lastname
