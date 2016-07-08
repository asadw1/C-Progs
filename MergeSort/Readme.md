##README

This is a C++ program demonstrating merge-sort algorithm. MergeSort works by splitting
an array into single elements, then recursively merging them back in non-decreasing
order until all elements are sorted. This algorithm in the worst case runs in
O(n*log(n)) time, which is not bad, if we compare it to something like Insertion Sort
which will run in O(n^2) time, highly undesirable for large inputs.

-----------------------------------------------------------------------------------------

##PROGRAM DESIGN:

Structure: Procedural, single main.cpp file
  - Future: Classes/OOP, multiple files
Data Structures: Arrays
  - Future: vectors
User Interface: Terminal Keyboard I/O
  - Future: stdin/args, from normal distribution random-generated data file

-----------------------------------------------------------------------------------------

##PROGRAM BUILD/RUN

###COMPILE FOR RELEASE:

`g++ -Wall main.cpp`

###COMPILE FOR DEBUG:

`g++ -Wall -g -o debug main.cpp`

###RUN:

`./main`

-----------------------------------------------------------------------------------------
 
