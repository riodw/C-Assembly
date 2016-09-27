// test-puts.c:
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
