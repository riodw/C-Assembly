# C & Assembly
C & Assembly - COMPSCI 240
## Project 6 : Conversions of Unsigned Numbers
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/03.unsigned-conversions.shtml](https://montcs.bloomu.edu/240/Asns/03.unsigned-conversions.shtml)
--------------------
**INSTRUCTIONS:**

56-240, C and Assembly Programming

Conversions of Unsigned Numbers

This assignment calls for two separate (but related) programs. The programs perform number conversions:

<dl>

<dt>**Unsigned decimal to other base**.</dt>

<dt>**Other base to unsigned decimal**.</dt>

</dl>

Each program must implement a conversion algorithm such as those described in class. Since C is only capable of working accepting base-10, base-8, and base-16 numbers, you will need to represent all bases (except 10) in a character format. This is just an extension of the problem with producing binary bitstrings.

Write your programs to use separate functions for each step of the algorithm. These functions can then be re-used for some of the steps of the following assignment, which requires conversions of signed numbers with decimal points.

1.  Write a decimal-to-base conversion program. Your program must accept a (base-10, unsigned) integer, and a base. The base can be any value from 2 through 16 (specified in base-10). Convert the input value to the specified base, and display the result.

    As discussed in class, the converted value is a null-terminated text string that you generate one "digit" at a time. You may assume that the input value will be no greater than `2<sup>64</sup>-1` (the largest possible unsigned integer), and therefore the output will be no more than 64 characters long.

    Make sure you can handle an input of 0 (zero)!

    Example output (as run from a Windows command prompt — Linux programs generally don't have the ".exe" extension):

    <pre class="outputbox"><span class="prompt">P:\></span> _d2b.exe_
    Enter a decimal value, and a desired base: 35 9

    35 equals 38 (base-9)
    <span class="prompt">P:\></span>

    <span class="prompt">P:\></span> _d2b.exe_
    Enter a decimal value, and a desired base: 0
    3

    0 equals 0 (base-3)
    <span class="prompt">P:\></span>
    </pre>

    You may assume that all inputs from the console are valid numbers followed by "newlines". Additional processing, to ignore/discard extraneous "garbage" input, is not required (but naturally is acceptable).

    As a practical matter, you may have fewer "oddities" running your program if you use a separate `scanf()` statement for each input value. This will work even if the inputs are given on the same line (as in the example above). For example: `scanf(" %u", &number); scanf(" %u", &base);`

2.  Write a base-to-decimal conversion program. Your program must accept a text string that represents a value, and an integer for the base. The base can be any value from 2 through 16 (specified in base-10). Convert the input string from the specified base into a numeric value, and display the result (as an unsigned integer).

    You may assume that the input value will represent a number no greater than `2<sup>64</sup>-1` (the largest possible unsigned integer, 18446744073709551615). This implies that the input string will be no more than 64 characters long.

    Make sure you can handle an input of 0 (zero)!

    Example output (as run from a Windows command prompt):

    <pre class="outputbox"><span class="prompt">P:\></span> _b2d.exe_
    Enter a value, and a desired base: 38 9

    38 (base-9) equals 35
    <span class="prompt">P:\></span>

    <span class="prompt">P:\></span> _b2d.exe_
    Enter a value, and a desired base: 0 3

    0 (base-3) equals 0
    <span class="prompt">P:\></span>
    </pre>
