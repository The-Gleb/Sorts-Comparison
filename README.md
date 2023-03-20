# Sorts-Comparison
## Description
Implementations of common sorting algorithms for the further analysis
## Technical task
### Sorting algorithms to implement
- Bubble sort;
- Insertion sort;
- Selection sort;
- Quicksort;
- Heapsort;
- Merge sort;
- Radix sort.
### Data stuctures to implement
- Array;
  - There will be no specifics about methods you should implement, but try to implement as many as possible to cover all possible needs;
  - As always, I want to see methods definition inside the header file (e.g. "Array.h");
- Singly linked list;
  - The same as the array;
### Requirements to sorts
- All sorts must be able to sort data of any type;
- All sorts must take the first argument (which contains data to sort) by reference;
- All sorts must be able to sort at least four types of an array: the static one, the dynamic one, [the std one](https://en.cppreference.com/w/cpp/container/array), the custom one;
- All sorts must be able to sort a singly linked list (both the custom one and [the std one](https://en.cppreference.com/w/cpp/container/forward_list));
- All sorts must take a comparator as a second argument with default value: *bool IsLess(T a, T b) { return a < b; }* where *T* is a type of data to sort;
- All sorts must return nothing;
- There must be several modes in which the program works:
  - Research: you must count all "<" and "=" (not "==") operations and print them in the end with friendly-interface commentary;
  - Print: the program must print both the initial array and the sorted one, again, with friendly-interface commentary;
  - Default: just sort, no prints or counts required;
  - Use [preprocessor directives](https://en.cppreference.com/w/cpp/preprocessor/conditional) to complete this task; 
### Custom data types to implement
- Rational number;
  - Do not forget about implementing custom "operator<";
- Graph;
  - Let us assume that graph A is less than graph B iff chomatic number of A is less than chromatic number of B;
- Matrix;
  - Let us assume that matrix A is less than matrix B iff the row rank of A is less than the row rank of B and if row ranks are equal then the column rank of A is less than the column rank of B; 
- Employee;
  - Two fields: name, age; no methods;
  - Employee A is less than employee B iff the age of A is less than the age of B;
- All custom data types should be implemented inside their own header and source file;
### Some additional tasks:
- Which sorts of the listed above can you use to sort Employees to avoid changing order of same-age employees inside of data structure?
- Given list of natural numbers, sort it to have Fibonacci numbers sorted first and all other number reverse-sorted after them;
  - Try to do it using one of the sort you have implemented and the custom comparator, or prove that no single one comparator could do it (by counterexample e.g.);
