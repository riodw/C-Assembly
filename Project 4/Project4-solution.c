#include <stdio.h>
#include<string.h>
#include <limits.h>

void prttable(unsigned *counts)
{
    unsigned msglen, i;
    char *msg[7] = {
        "Total"
      , "Distinct"
      , "Alphabetic"
      , "Whitespace"
      , "Digits"
      , "Most occurrences"
      , "Fewest occurrences"
    } ;
    msglen = strlen(msg[0]);
    for (i = 1; i < 7; i++)
        if (msglen < strlen(msg[i])) msglen = strlen(msg[i]);

    printf("%.*s- ----------\n", msglen, "--------------------");
    for (i = 0; i < 7; ++i)
        printf("%*.*s: %4u chars\n", msglen, strlen(msg[i]), msg[i], counts[i]);
    printf("%.*s  ----------\n", msglen, "--------------------");
}

int main(int argc, char **argv)
{
    unsgned charcounts[256];   // allow for Extended ASCII (or UTF-8?)
    unsigned nTotal =0,
        nDistinct = 0,
        nLetters = 0,
        nWhitespace = 0,
        nDigits = 0;
    unsigned most_common = 0, least_common= UINT_MAX;
    unsigned allCounts[7];
    unsigned char most_common_char, least_common_char;
    int c;  // must be an int in order to capture the EOF correctly!
    unsigned i;

    for (i = 0; i < 256; i++)
        charcounts[i] = 0;

    printf("Enter text:\n");
    for ( ; ; ) {
        c = getchar();
        if (c == EOF)
            break;

        if (charcounts[c] == 0)
            nDistinct++;
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
            nLetters++;
        else if ((c >= 0x09 && c <= 0x0d) || c == ' ')
            nWhitespace++;
        else if (c >= '0' && c <= '9')
            nDigits++;
        // else it's something else...

        nTotal++;
        charcounts[c]++;
    }

    for (i = 0; i < 256; i++) {
        if (charcounts[i] > most_common) {
            most_common = charcounts[i];
            most_common_char = i;
        }
        if (charcounts[i] && (charcounts[i] < least_common)) {
            least_common = charcounts[i];
            least_common_char = i;
        }
    }

    allCounts[0] = nTotal;
    allCounts[1] = nDistinct;
    allCounts[2] = nLetters;
    allCounts[3] = nWhitespace;
    allCounts[4] = nDigits;
    allCounts[5] = most_common;
    allCounts[6] = least_common;
    prttable(allCounts);

    printf(
        "\n\n" \
        "Total:        %u\n" \
        "nDistinct:    %u\n" \
        "nLetters:     %u\n" \
        "nWhitespace:  %u\n" \
        "nDigits:      %u\n" \
        "\n" \
        "most common:  %u, -->%02x<--\n" \
        "least common: %u, -->%02x<--\n",
        nTotal, nDistinct, nLetters, nWhitespace, nDigits,
        most_common, most_common_char,
        least_common, least_common_char
    );

    return 0;
}
