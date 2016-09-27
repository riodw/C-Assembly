# C & Assembly
C & Assembly - COMPSCI 240
## Project 4 : Counting Characters
### Original Instructions:
#### [https://montcs.bloomu.edu/240/Asns/Asn.char-counting](https://montcs.bloomu.edu/240/Asns/Asn.char-counting)
--------------------
**INSTRUCTIONS:**

CompSci 240, C and Assembly Programming

assignment: Counting characters

## Assignment

Write a program that accepts a character string from the terminal, then counts the (ASCII) characters in its input, according to the kind of character. Once the input is finished, print a formatted table showing the results. The desired results are:

*   how many total characters there were;
*   how many _distinct_ characters occurred;
*   how many letters of the alphabet (`a`–`z`, `A`–`Z`);
*   how many "whitespace" characters<sup>[<span class="note">†</span>](#whitespace)</sup>;
*   how many digits;
*   the count of the _most_ common character, and the count of the _least_ common character that appears at all.

The input simply consists of text strings. The strings may be entered from the keyboard, or redirected from a data file. You should provide a user prompt, although that won't matter if the input is redirected. Here are some links to text files that can be used as inputs:

*   [Jabberwocky.txt](/Readings/Jabberwocky.txt)
*   [sierpinski-counting.html](/Readings/sierpinski-counting.html)
*   [The Elements.Tom Lehrer.txt](/Readings/The%20Elements.Tom%20Lehrer.txt)
*   [moon_size.html](/Readings/moon_size.html)
*   [10 Commandments of C.txt](/Readings/10%20Commandments%20of%20C.txt)
*   [War of the Worlds](/Readings/WarOfTheWorlds.txt)
*   [Complete Shakespeare](http://www.gutenberg.org/ebooks/100.txt.utf-8) (from Gutenberg site).

**Note:** When redirecting a file into standard input, the end of the file is signaled by the input function returning a special value. `fgetc()`, `getchar()`, and `scanf()` return an EOF value, `fgets()` returns a NULL `char *` pointer. You can generate the end-of-file condition from the keyboard by pressing <CTRL>-D in Linux (or <CTRL>-Z in Windows/DOS).

**How many, and what, ASCII characters are there?**  
Technically there are only 128 "7-bit ASCII" characters. There are another 128 "extended ASCII" characters, thus using all 256 possible bit combinations in a `char`, but these are not as standardized. The C character-input routines may have real problems with the "extended ASCII" characters, and they're tricky to produce (on a keyboard) anyway. It is sufficient to handle the 7-bit characters. However, even these include control characters that are not alphanumeric or symbolic, and generally don't display visibly on a terminal.

> <span class="note">†</span> The characters that Ansi C defines to be whitespace are: horizontal tab, newline (_a.k.a._line feed), vertical tab, form feed, carriage return, and Space — ASCII 0x09 through ASCII 0x0d, and ASCII 0x20.

## Grading rubric

Approximate weights.

<table id="grading">

<tbody>

<tr>

<th>50%</th>

<td>Executable runs without crashing.</td>

</tr>

<tr>

<th>35%</th>

<td>Executable produces correct answers.</td>

</tr>

<tr>

<th>10%</th>

<td>Quality of comments.</td>

</tr>

<tr>

<th>5%</th>

<td>Coding style.</td>

</tr>

</tbody>

</table>

## Hints

You may write this program however you like. However, here are some ideas that may help:

*   Use an array to keep the counts of every possible ASCII character.
*   After all characters have been read in and counted, look for the largest and smallest counts.
*   C offers some functions that make it easier to test ASCII characters; however, you don't need to use those functions. They are merely wrappers for compound `if` statements.
*   The 7-bit ASCII characters are shown in this [ASCII table](/Information/Encodings/ascii-7.html). (Many other ASCII tables are around.)
*   All 256 "extended ASCII" characters (and also EBCDIC characters) are shown in this link: [ASCII and EBCDIC tables](/Information/Encodings/ASCII-EBCDIC.html).

## Example outputs

### Example run with input from the keyboard.

![keyboard entry](/240/Asns/Asn.char-counting/keyboard-entry.png)

### A data file; and a test run with input redirected from the file.

Notice that the last line of this datafile doesn't end with a newline...

![charcounter.test](/240/Asns/Asn.char-counting/charcounter.test.png)   ![charcounter.test-counts](/240/Asns/Asn.char-counting/charcounter.test-counts.png)

### Output from the Jabberwocky.txt file.

![Jabberwocky-counts](/240/Asns/Asn.char-counting/Jabberwocky-counts.png)

(The most common character is a space, and the least common is an apostrophe.)
