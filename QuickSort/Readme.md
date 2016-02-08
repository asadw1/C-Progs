# QuickSort

===============================

Recursive implmentation of the quicksort algorithm in C++.

I will most likely include some analysis/commentary in this file
as I learn more about the QucikSort algorithm.

I spent a tiny amount of time last year trying to get this algorithm to work as expected
in Windows using VS 2013. I have since abandoned Windows entirely and switched to Ubuntu so
this hopefully gives me deeper understanding of quicksort's structure and operations. 


Intuitively, the same way a BST might order child nodes by making any children less than the root on the left,
and children greater or equal to the root on the right, the QuickSort algorithm does the same thing at a surface-
level by using a "pivot". 

Function partition will move records to the appropriate partition and then return k, the first position in the 
right partition. Note that the pivot value is initially placed at the end of the array (position j). Thus, 
partition must not affect the value of array position j. After partitioning, the pivot value is placed in 
position k, which is its correct position in the final, sorted array. By doing so, we guarantee that at least one 
value (the pivot) will not be processed in the recursive calls to qsort. Even if a bad pivot is selected, yielding 
a completely empty partition to one side of the pivot, the larger partition will contain at most n−1 records.

Selecting a pivot can be done in many ways. The simplest is to use the first key. However, if the input is sorted 
or reverse sorted, this will produce a poor partitioning with all values to one side of the pivot. It is better 
to pick a value at random, thereby reducing the chance of a bad input order affecting the sort. Unfortunately, 
using a random number generator is relatively expensive, and we can do nearly as well by selecting the middle 
position in the array.
