#include <stdio.h>

int get_integer(void);
int factorial(int n);
int combination(int n, int r);

int main(void)
{
    int n,r ;
    int result;

    printf("Enter n: ");
    n = get_integer();

    printf("Enter r:");
    r= get_integer();

    if (n < 0 || n > 12 || r < 0 || r > n)
    {
        printf("Invalid input!\n");
        return 1;
    }

    result = combination(n,r);
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}

int get_integer(void)
{
    int value;
    
    scanf("%d", &value);

    return value;
}

int factorial(int n)
{
    int i;
    int res = 1;

    for (i = 1; i <= n; i++)
    {
        res = res * i;
    }

    return res;
}

int combination(int n, int r)
{
    int result;

    result = factorial(n) /
             (factorial(n - r) * factorial(r));

    return result;
}