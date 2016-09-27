# C & Assembly
C & Assembly - COMPSCI 240
## Project 2 : Temperature Conversions
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/01.basics.shtml](https://montcs.bloomu.edu/240/Asns/01.basics.shtml)
--------------------
**Files:**

`P2File1.c` - Formatted Output

`P2File2.c` - Basic Input

`P2File3.c` - Structure

`P2File4.c` - Loop, Tabular Output

`P2File5.c` - Character Strings

**INSTRUCTIONS:**

###CompSci 240, Low-level programming

###Temperature Conversions

Write each of the following C programs, compile them and run them. For each one, submit the source file.

Source code files must begin with a comment containing your name, the name of the assignment and a brief description of it (one line is sufficient), and the date you wrote it. For example:

<pre class="code" style="width:40em;margin-left:4em;border:1px solid #000">/*
  Alice ByteCoder
  Assignment 1: Program to show powers of numbers in a table
  October 15, 1582
/*
</pre>

<table class="tasks">

<thead>

<tr>

<th>points</th>

<th>task</th>

</tr>

</thead>

<tbody>

<tr>

<th>20%</th>

<td>formatted output</td>

</tr>

<tr>

<th>20%</th>

<td>basic input</td>

</tr>

<tr>

<th>20%</th>

<td>`if-else` structure</td>

</tr>

<tr>

<th>20%</th>

<td>`for` loop, tabular output</td>

</tr>

<tr>

<th>20%</th>

<td>character strings</td>

</tr>

</tbody>

</table>

<dl class="tasks">

<dt>formatted output</dt>

<dd>Write a program that creates some constant values, and uses formatted output to print them in a table in multiple ways. The constants are:

> *   the value of π (available as the named constant `M_PI` in `<math.h>`,
> *   Avogadro's number --- an official value is given by [NIST](http://physics.nist.gov/cgi-bin/cuu/Value?na) and copied by Wikipedia,
> *   1500450271, which is a 10-digit prime number,
> *   your name,
> *   the first letter of the alphabet (your choice of upper or lower case).

Use an appropriate variable type for each value, not a `#define`. Each value must be displayed in a field exactly 25 characters wide, in a field exactly 15 characters wide, and in a field (at least) 5 characters wide. Each field must have an underscore character ( `_` ) before and after it to make it visible.

Numbers must be displayed as **floating-point** values, as **unsigned integer** values, and as **hexadecimal** values.

The text string and the letter must be displayed both **right-justified** and **left-justified**, and also in **hexadecimal** (which will create compiler warnings).

Use the appropriate format specifiers to do this --- you will also have to convert the numeric values to the correct types for outputting purposes.

The following output shows what you should produce:

<pre class="boxed" style="margin-left:1em;background:#fffff0">CONSTANT
******************************************************************
      pi: _3.14159265358979311599796_  _3.1415926535898_  _3.142_
        : _                        3_  _              3_  _    3_
        : _                        3_  _              3_  _    3_
******************************************************************
Avogadro: _6.0221408570000001519e+23_  _6.022140857e+23_  _6e+23_
        : _                        0_  _              0_  _    0_
        : _                        0_  _              0_  _    0_
******************************************************************
big prime: _               1500450271_  _     1500450271_  _2e+09_
        : _               1500450271_  _     1500450271_  _1500450271_
        : _                 596f0ddf_  _       596f0ddf_  _596f0ddf_
******************************************************************
    name: _               instructor_  _     instructor_  _instructor_
        : _instructor               _  _instructor     _  _instructor_
        : _                 8bd3d6c0_  _       8bd3d6c0_  _8bd3d6c0_
******************************************************************
  letter: _                        A_  _              A_  _    A_
        : _A                        _  _A              _  _A    _
        : _                       41_  _             41_  _   41_
******************************************************************
</pre>

Your name's hexadecimal output will probably be different from this example; that's okay.</dd>

<dt>basic input</dt>

<dd>Write a program that prompts you for your name, an integer, and a real (floating-point) number, then prints them back out on a single line. Example output should look similar to this:

<pre class="boxed" style="margin-left:1em;background:#fffff0">Enter your name: <span class="user">foobar</span>
Enter an integer and a real number: <span class="user">-9999    314.159e-2</span>

name: foobar; integer: -9999; real: 3.14159

</pre>

</dd>

<dt>`if-else` structure</dt>

<dd>Write a program that converts between Celsius, Fahrenheit, and Kelvin temperatures. It must prompt the user for a temperature, and the units that temperature is in (C, c, F, f, K, or k); then convert the temperature to both of the other scales and display the result. Example output should look similar to this:

<pre class="boxed" style="margin-left:1em;background:#fffff0">Temperature: <span class="user">98.6</span>
Units: <span class="user">f</span>

F: 98.6   C: 37   K: 310.15

</pre>

</dd>

<dt>`for` loop, tabular output</dt>

<dd>Write a program that produces a wind-chill chart. This is a chart that shows the "wind chill temperature" for a given air temperature (in degrees Fahrenheit) and wind speed (in miles per hour). A sample is shown below.

Your program must prompt the user for minimum and maximum temperatures, and minimum and maximum wind speeds; then produce a two-dimensional chart like the one below. Temperatures are in increments of two degrees; wind speeds are in increments of 2.5 mph. Notice that the temperatures range from _highest_ (top row) to _lowest_ (bottom row).

A detailed description of wind chill is available from this [NOAA](http://www.crh.noaa.gov/gjt/Weather_Info/wchill.php) webpage. The formula for calculating wind chill is:

<div style="font-family: Courier, monospaced; font-weight: bold; font-size: 120%;">_WindChill_ = 35.74 + (0.6215 × _Temp_) - (35.75 × _Wind_<sup>0.16</sup>) + (0.4275 × _Temp_ × _Wind_<sup>0.16</sup>)</div>

Note that you must take a non-integer power of the wind speed. To do this, you need the `pow()` function, available in the `<math.h>` header file. You will also need to link in the math library by using the `-lm` flag, like this: <span class="code">gcc -Wall  -o asn2d asn2d.c  -lm</span>

<pre class="boxed" style="margin-left:1em;background:#fffff0">Min, Max temperature: <span class="user">-8 8</span>
Min, Max wind: <span class="user">0 9</span>

  T \ W     0.0    2.5    5.0    7.5
         ------ ------ ------ ------
  8.0 |    40.7    3.3   -1.1   -3.9
  6.0 |    39.5    1.0   -3.5   -6.3
  4.0 |    38.2   -1.2   -5.8   -8.8
  2.0 |    37.0   -3.4   -8.2  -11.2
  0.0 |    35.7   -5.7  -10.5  -13.6
 -2.0 |    34.5   -7.9  -12.9  -16.0
 -4.0 |    33.3  -10.1  -15.2  -18.5
 -6.0 |    32.0  -12.4  -17.6  -20.9
 -8.0 |    30.8  -14.6  -19.9  -23.3
</pre>

</dd>

<dt>character strings</dt>

<dd>Write a program that accepts character strings from the user, and copies them into a single long string, until either (a) the user enters an empty string (nothing except possibly a "newline" — `'\n'`), or (b) 255 characters have been copied. If you use `fgets()` it will include the terminating `'\n'`, which must _not_ be copied. After all user input is done, the resulting string must be terminated with a NULL character and printed out.

There are standard functions that do this, such as `strncpy()` and `strncat()`, but you may not use them. Instead, write your own code to do the copying.

For proper input you should use the `fgets()` function. This function includes the terminating `'\n'`, which you must not copy. It will be the last character of each input; you can either test for and skip any `'\n'` characters, or just stop before copying the last character.

Example output should look similar to this:

<pre class="boxed" style="margin-left:1em;background:#fffff0">P:\> asn2e.exe
Your input: <span class="user">abcde</span>
Your input: <span class="user">FG HIjkL</span>
Your input:

abcdeFG HIjkL

</pre>

</dd>

</dl>
