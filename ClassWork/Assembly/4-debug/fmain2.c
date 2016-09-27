#include<stdio.h>
#include<stdlib.h>  // atoi()
#include<math.h>    // log()

struct ListNode {
    struct ListNode *prev, *next;
    long unsigned n, f;
};

long unsigned fact(long unsigned);

int main(int argc, char **argv)
{
    unsigned i, width = 0;
    long unsigned n, f;
    struct ListNode *head = NULL, *cursor = NULL, *tail = NULL;

    for (i = 1; i < argc; i++) {
        tail = (struct ListNode *)malloc(sizeof(struct ListNode));
        tail->next = NULL;
        if (head == NULL) {
            head = tail;
        } else {
            cursor->next = tail;
        }
        tail->prev = cursor;
        cursor = tail;

        tail->n = atoi(*(argv+i));
        tail->f = fact(tail->n);
        if (width < 1+log10(tail->f))
            width = 1 + log10(tail->f);
    }

    for (cursor = tail; cursor != NULL; cursor = cursor->prev)
        printf("%2lu  %*lu\n", cursor->n, width, cursor->f);
    return 0;
}