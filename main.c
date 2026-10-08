
#include <stdio.h>

void func(void);
void func_value(int x);

int main(void)
{
    int x = 10;

    printf("main x is at %p\n", (void *)&x);

    func();
    func();

    func_value(x);

    printf("main x = %d\n", x);

    return 0;
}

void func(void)
{
    int x;

    printf("func x is at %p\n", (void *)&x);
}

void func_value(int x)
{
    printf("func_value x is at %p\n", (void *)&x);
    printf("func_value x = %d\n", x);
}
