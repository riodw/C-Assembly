# C & Assembly
C & Assembly - COMPSCI 240
## Project 1 : Introduction to C
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/00.C-intro/asn.C-size.shtml ](https://montcs.bloomu.edu/240/Asns/00.C-intro/asn.C-size.shtml)
--------------------
**QUESTIONS:**
```
Answers.txt

1. 
	pl =   8548
	pl.c = 164
	pl.o = 1488

2.
	pla =   8549 
	pla.c = 536
	pla.o = 1512

3.
	plb =   8604
	plb.c = 236
	plb.o = 1648

4.
	plc =   8549
	plc.c = 229
	plc.o = 1632

5.
	pld =   8602
	pld.c = 489
	pld.o = 2000

6. How do the sizes of the five object files compare?
	pl.o = 1488 | pla.o = 1512 | plb.o = 1648 | plc.o = 1632 | pld.o = 2000
	The sizes of the five objects seem to have a general increase from the first to the last.

7. A. How do the sizes of the five executable files compare?
	pl = 8548 | pla = 8549 | plb = 8604 | plc = 8549 | pld = 8602
	The sizes of the five executable files seem to average at the same size.

7. B. Do these versions do the same thing, or different things?
	I would say that the all do the same thing. In the end, the output looks identical across the board.
```

--------------------
**INSTRUCTIONS:**

CompSci 240, Low-level Programming

assignment: Introduction to C


## Overview

The goals of this assignment are to use some basic I/O, and get a simple sense of how C compares to other languages. You will write a series of programs, and turn in source listings and answers to some questions about the programs; details are specified at the end of this writeup.

> The GCC ("Gnu Compiler Collection") family of compilers is the standard C and C++ compiler on Linux distributions, and is available for many other systems, in particular for MS-DOS and MS-Windows. It is a command-line compiler, not a full IDE, so an editor is required to actually write the files. The SciTE editor is a simple GUI-oriented programmer's editor that is also available on many systems, specifically Linux and MS-Windows.

* * *

## The programs

1.  Write the first "hello world" program as shown on pp.6–7 of Kernighan. See below for the required comments. Name the source file "p1.c".
    1.  Compile your program with this command: `gcc -Wall -c p1.c` to produce the _object_ file "p1.o".
    2.  Then run the command: `gcc -o p1 p1.o` to produce an executable file.
    3.  Finally, try running the program as `./p1`.

    How big (in bytes) are the the three files "p1.c", "p1.o", and "p1"?

    <pre class="smaller boxed w350">    /*
          "Hello world" program - the Kernighan and Ritchie version.
          CompSci 240
          YOUR NAME
          YOUR DATE
        */
        #include <stdio.h>
        main()
        {
            printf( "Hello, world\n" );
        }
        </pre>

2.  Create a modified version of the source file and name it "p1a.c". This version must use the complete prototype for `main()` as described in class. (See the example below, under "Submit your assignment".)

    Compile this one as before, with appropriate names. How big (in bytes) are the the three files "p1a.c", "p1a.o", and "p1a"?

3.  Create another version of the source file and name it "p1b.c". This version must use three `printf()` statments, as on pg.8 of Kernighan; but also use the complete prototype for `main()` as described in class.

    Compile this one as before, with appropriate names. How big (in bytes) are the the three files "p1b.c", "p1b.o", and "p1b"?

4.  Create a fourth version of the source file and name it "p1c.c". Replace the `printf()` statements of "p1b.c" with `puts()` statements. (Again, use the complete prototype for `main()` as described in class.)

    Compile this one as before, with appropriate names. How big (in bytes) are the the three files "p1c.c", "p1c.o", and "p1c"?

5.  Create a fifth version of the source file and name it "p1d.c". For this version, use a separate `putchar()` statement for each single character of the message. (Again, use the complete prototype for `main()` as described in class.)

    Compile this one as before, with appropriate names. How big (in bytes) are the the three files "p1d.c", "p1d.o", and "p1d"?

6.  How do the sizes of the five _object_ files compare?
7.  How do the sizes of the five _executable_ files compare? Do these versions do the same thing, or different things?

## Submit your assignment

Every program must begin with a set of comments that includes the program's name/description, your name, and the due date (or date of submission). For example:

> <object type="text/html" width="300" height="300" data="hello_C.html">
> 
> <pre>    /*
>       "Hello world" program - the Kernighan and Ritchie version.
>       CompSci 240
>       YOUR NAME
>       YOUR DATE
>     */
> 
>     #include <stdio.h>
> 
>     int main(int argc, char *argv[])
>     {
>         printf( "Hello, world\n" );
>         return 0;
>     }
>         </pre>
> 
> </object>
