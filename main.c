
#include <stdio.h>

int sumTwo (int a, int b);
int square(int n);
int get_max(int x, int y);

int main(void)
{
    int a,b;

    printf("enter two integer:");
    scanf("%d %d",&a,&b);

    printf("Sum = %d\n", sumTwo(a, b));
    printf("Square of a = %d\n", square(a));
    printf("Max = %d\n", get_max(a, b));

    return 0;
}

int sumTwo (int a,int b)
{
    return a+b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if(x> y)
        return x;
    else
        return y;
}