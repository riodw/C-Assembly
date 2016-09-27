# C & Assembly
C & Assembly - COMPSCI 240
## Project 9 : Harmonic Mean
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/Asn.extra-credit/XC.harmonic-mean-C.html](https://montcs.bloomu.edu/240/Asns/Asn.extra-credit/XC.harmonic-mean-C.html)
--------------------
**INSTRUCTIONS:**
CompSci 240, C and Assembly Programming

assignment: Harmonic Mean

points?


## Overview

Write a program that reads a series of floating-point numbers from stdin into an array, then calculates the _harmonic mean_ of the numbers. The array should allow for up to 10,000 values.

The harmonic mean in defined as: <span><span class="large">(1/<sub>n</sub> × ∑</span> _sample_<sup>-1</sup><span class="large">)<sup>-1</sup></span></span>

Note that the numbers should not include 0, as its inverse is infinite.

Use a function that accepts a pointer to an array of type double, and the size of the array; and returns the harmonic average of the elements in the array. You must use **pointers** to access the array elements, not array indexes. Here is the function's prototype:

<div style="margin-left:2em">`double harmonicMean(double *ary, unsigned size);`</div>

### Turn in:

Submit

*   the source-code file
*   a file containing a sample run, similar to the one below

Source code files must begin with a comment containing your name, the name of the assignment and a brief description of it (one line is sufficient), and the date you wrote it. For example:

<pre class="code" style="width:40em;margin-left:4em;border:1px solid #000">/*
  Alice ByteCoder
  Assignment 1: Program to show powers of numbers in a table
  October 15, 1582
/*
</pre>

## Grading

*   _3 pts _ program compiles and runs.
*   _2 pts _ program produces correct answers.
*   _5 pts _ program source code is well written, using pointers.

## Sample data:

*   [10 random values](rand10.txt)
*   [100 random values](rand100.txt)
*   [1000 random values](rand1000.txt)
*   [10,000 random values](rand10000.txt)

* * *

## Example output

<pre class="code boxed" style="width:50em">199] ./harmonic-mean 
Enter <= 10,000 values:
1
2
Harmonic mean of 2 values is 1.333333

200] ./harmonic-mean < rand10000.txt 
Enter <= 10,000 values:
Harmonic mean of 10000 values is 84.317563

201] ./harmonic-mean < rand1000.txt 
Enter <= 10,000 values:
Harmonic mean of 1000 values is 82.550657

202] ./harmonic-mean < rand100.txt 
Enter <= 10,000 values:
Harmonic mean of 100 values is 133.999647

203] ./harmonic-mean < rand10.txt 
Enter <= 10,000 values:
Harmonic mean of 10 values is 240.107485
</pre>
