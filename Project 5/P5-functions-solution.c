unsigned length(char *in)
{
    unsigned total = 0;
    while (*(in++) != '\0')
        total++;
    return total;
}

void lower(char *out, char *in)
{
    char c;
    for ( ; *in != '\0'; in++, out++) {
        c = *in;
        if (c >= 'A' && c <= 'Z')
            c += 0x20;
        *out = c;
    }
    *out = '\0';
}

void upper(char *out, char *in)
{
    char c;
    for ( ; *in != '\0'; in++, out++) {
        c = *in;
        if (c >= 'a' && c <= 'z')
            c -= 0x20;
        *out = c;
    }
    *out = '\0';
}

int isSpace(char c)
{
    return (c == ' ' || c == '\n' || c == '\t' || c == '\r'); 
}

void caps(char *out, char *in)
{
    int newWord = 1;    // True
    char c;
    for ( ; *in != '\0'; in++, out++) {
        c = *in;
        if (isSpace(c))
            newWord = 1;    // True
        else if (newWord) {
            newWord = 0;    // False
            if ((c >= 'a') && (c <= 'z'))
                c -= 0x20;
        }
        *out = c;
    }
    *out = '\0';
}
