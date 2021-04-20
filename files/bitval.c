#include <stdio.h>
#include <string.h>

struct Number
{
    int a : 4;
    int b : 4;
    int c : 8;
};

union Demo
{
    int a;
    struct Number b;
};

void main()
{
    struct Number n;

    printf("%ld\n", sizeof(n));

    union Demo ud;
    ud.b = n;

    printf("%d", ud.a);
}
