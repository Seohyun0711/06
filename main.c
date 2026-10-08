

#include <stdio.h>

int square(int a);

int main(void)
{
    int a = 2;

    a = square(a);

    printf("a=%i\n", a);

    return 0;
}

int square(int a)
{
    return a * a;
}
