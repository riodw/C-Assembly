# C & Assembly
C & Assembly - COMPSCI 240
## Project 5 : Using Strings and Pointers
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/Asn.strings-pointers](https://montcs.bloomu.edu/240/Asns/Asn.strings-pointers)
--------------------
**INSTRUCTIONS:**

CompSci 240, C and Assembly Programming

assignment: Using Strings and Pointers

## The task

Text strings in C are stored as arrays, and the name of the array is actually a pointer to the first character (element) of that array. For this assignment you must write a program that accepts (a) a code indicating a string processing operation to be performed, and (b) one or more text strings to be processed. The possible codes, and operations, are:

<table>

<thead>

<tr>

<th>Code</th>

<td>ftn name</td>

<td>Operation</td>

</tr>

</thead>

<tbody>

<tr>

<th>0</th>

<td>`length()`</td>

<td>Count string length. This is just the "strlen()" function reimplemented with pointers.</td>

</tr>

<tr>

<th>1</th>

<td>`lower()`</td>

<td>Convert to all lowercase letters. Only characters that are uppercase letters should be changed.</td>

</tr>

<tr>

<th>2</th>

<td>`upper()`</td>

<td>Convert to all capital letters Only characters that are lowercase letters should be changed.</td>

</tr>

<tr>

<th>3</th>

<td>`caps()`</td>

<td>Capitalize each word ("headline" mode). Each letter that is preceded by a whitespace character (or that starts a line) should be uppercased.</td>

</tr>

</tbody>

</table>

Your program may accept input from the console (keyboard). For convenient testing, you should make a data file and redirect input from that. Example data files are shown below.

Use the `fgets()` function for all inputs. Valid input consists of: the code, on a single line by itself; followed by _at least_ one line of text (which may be only a single character long). (Note: a blank line will still have a newline at the end, so it'll be a single character long.) All 7-bit ASCII characters except `NUL` (ASCII 0x00) are possible, including digits, punctuation, and control characters such as `newline` (ASCII 0x0a) and `Ctrl-H` (ASCII 0x08), but only the letters A-Z and a-z can have their case converted. You need not worry about 8-bit extended-ASCII, although the easiest approach (testing whether the character falls in the range of upper- or lowercase letters) should be unaffected by them.

You may assume that all input lines are less than 2001 characters long. (Although you can use `fgets()` in a loop in such a way that it doesn't matter and longer lines just get processed piece-by-piece.)

All input and output should be done by the `main()` function. Each function must receive the string(s) it is working with, as shown by the prototypes: Functions may assume that source strings are null-terminated, and destination strings are long enough (this will be the responsibility of your `main()` function).

Program output is to `stdout`.

#### Prototypes

*   unsigned length(char *s);
*   void lower(char *dest, char *source);
*   void upper(char *dest, char *source);
*   void caps(char *dest, char *source);

## Pointers required

You must write a separate function for each of the four operations. Each of the functions should process a line of input at a time --- this will make operation 3 much easier. The `fgets()` function will include the newline at the end of each line, which is a significant part of the input.

You are **not** to use any of the built-in string functions (`strlen()`, `strcpy()`, `strchr()`, etc.). You must write your own functions as described below, and they must use character pointers rather than array indexes!

1.  `length()` must receive a pointer to an input string, and return an unsigned integer indicating the string's length. Do this by "walking the string" until you find the terminating NULL value.
2.  `lower()` must receive a pointer to a destination string, and a pointer to a source string, and copy the source to the destination one character at a time while converting all letters to lowercase.
3.  `upper()` must receive a pointer to a destination string, and a pointer to a source string, and copy the source to the destination one character at a time while converting all letters to uppercase.
4.  `caps()` must receive a pointer to a destination string, and a pointer to a source string, and copy the source to the destination one character at a time. If the _preceding character_ was a space, tab, or `'\r'` (ASCII 0x0d), or if the character being processed is the first character, then (if it's a letter) it must be capitalized.

## Short example inputs and outputs

The display of "non-printable" characters such as newline (ASCII 0x0a) and Ctrl-M (ASCII 0x0d) may vary from computer to computer. The values are shown below to emphasize that they are copied without change. The data file is available [here](asn.strings-pointers.datafile).

<table id="examples">

<tbody>

<tr>

<th>`length()`</th>

<th>file contents:

<pre>0_(ASCII 0x0a)_
aBcDe_(ASCII 0x0a)_
ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
a_(ASCII 0x0a)_
AbCdE_(ASCII 0x0a)_
_(ASCII 0x0a)_
abcd efgh ijKL mnoP qrst 1uvw $xyz_(ASCII 0x0a)_
</pre>

</th>

<th>output:

<pre>
length: 3
length: 1
length: 10
length: 2
length: 6
length: 1
length: 35
</pre>

</th>

</tr>

<tr>

<th>`lower()`</th>

<th>file contents:

<pre>1_(ASCII 0x0a)_
aBcDe_(ASCII 0x0a)_
ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
a_(ASCII 0x0a)_
AbCdE_(ASCII 0x0a)_
_(ASCII 0x0a)_
abcd efgh ijKL mnoP qrst 1uvw $xyz_(ASCII 0x0a)_
</pre>

</th>

<th>output:

<pre>
abcde_(ASCII 0x0a)_
ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
a123$%^_(ASCII 0x0d)_c_(ASCII 0x0a)_
a_(ASCII 0x0a)_
abcde_(ASCII 0x0a)_
_(ASCII 0x0a)_
abcd efgh ijkl mnop qrst 1uvw $xyz_(ASCII 0x0a)_
    </pre>

</th>

</tr>

<tr>

<th>`upper()`</th>

<th>file contents:

<pre>2_(ASCII 0x0a)_
aBcDe_(ASCII 0x0a)_
ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
a_(ASCII 0x0a)_
AbCdE_(ASCII 0x0a)_
_(ASCII 0x0a)_
abcd efgh ijKL mnoP qrst 1uvw $xyz_(ASCII 0x0a)_
    </pre>

</th>

<th>output:

<pre>
ABCDE_(ASCII 0x0a)_
AB_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
A_(ASCII 0x0a)_
ABCDE_(ASCII 0x0a)_
_(ASCII 0x0a)_
ABCD EFGH IJKL MNOP QRST 1UVW $XYZ_(ASCII 0x0a)_
    </pre>

</th>

</tr>

<tr>

<th>`caps()`</th>

<th>file contents:

<pre>3_(ASCII 0x0a)_
aBcDe_(ASCII 0x0a)_
ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
a_(ASCII 0x0a)_
AbCdE_(ASCII 0x0a)_
_(ASCII 0x0a)_
abcd efgh ijKL mnoP qrst 1uvw $xyz_(ASCII 0x0a)_
    </pre>

</th>

<th>output:

<pre>
ABcDe_(ASCII 0x0a)_
Ab_(ASCII 0x0a)_
_(ASCII 0x0a)_
A123$%^_(ASCII 0x0d)_C_(ASCII 0x0a)_
A_(ASCII 0x0a)_
AbCdE_(ASCII 0x0a)_
_(ASCII 0x0a)_
Abcd Efgh IjKL MnoP Qrst 1uvw $xyz_(ASCII 0x0a)_
    </pre>

</th>

</tr>

</tbody>

<script type="text/javascript">ts_validate();</script></table>

</div>
