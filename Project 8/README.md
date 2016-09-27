# C & Assembly
C & Assembly - COMPSCI 240
## Project 8 : Assembly-Language `puts()`
----------------------
**INSTRUCTIONS**

CompSci 240, C and Assembly programming

assignment: Assembly-Language puts()

## The task

Implement the C "puts()"function as an assembly-language routine, and modify the "hello-world" assembly program to use it. This means that your function: (a) must display NUL-terminated strings, instead of being told how long the strings are; (b) be able to be called from, and used by, a C program (as well as being callable by an assembly-language program).

Only the primitive text-based input and output services, provided by the Linux kernel via syscall, are available. (Comparable services are available in 32-bit Linux via interrupt 0x80, and in Windows via DOS interrupt 0x21; the differences in usage are minor.) You are expected to write a 64-bit version of the function; if you write a 32-bit version instead, you must document the differences in the comments.

Here are two possible algorithms for this function:

<pre class="boxed width45">;
; expects:
;       RDI: address of ASCIIZ string
; returns:
;       nothing
</pre>

<pre class="boxed width45">; algorithm:
;       void puts(char *s) {
;           while (*s != '\0') {
;               /*
;                   syscall to display a 1-character "string",
;                   the current character of the string itself.
;               */
;               s++;
;           }
;       }
</pre>

<pre class="boxed width45">; algorithm:
;       void puts(char *s) {
;           int len;
;           len = strlen(p);
;           /* syscall to write string of length "len" */
;       }
;
; also requires an implementation of strlen()
</pre>

These lines can serve as part of the function's comments.

If you use the second algorithm, you must also include the "strlen()" function in assembly. This function is described in class, but should be modified to be C-compatible.

The basic "hello, world" program must be modified to include, and use, your function. This includes adding the NUL (0) to the end of the string itself.

### C-compatible function

This routine should also be callable from a C-language program. Here is a test program to exercise your function:

<pre class="boxed width30">    // test-puts.c:
    // Test puts() assembly function
    // using command-line arguments.

    void puts(char *s);

    int main(int argc, char **argv)
    {
        for ( ; argc > 1; argc--) {
            ++argv;
            puts( *argv );
        }
        return 0;
    }
</pre>

This and your function can be built into a program like this:

<pre class="boxed width30">nasm -f elf64  my-puts.asm
gcc  -o test-puts  test-puts.c  my-puts.o
</pre>
