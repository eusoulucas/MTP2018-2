/ * P4.c * /
/ * Lucas Eduardo * /
/ * 11811EEL016 * /

#include <stdio.h>

int recursiva(int a, int b);

int main() {

    int a = 0, b = 0;
    scanf("%d + %d", &a, &b);

    printf("%d",recursiva(a, b));

    return 0;
}

int recursiva(int m, int n)
{
    if(m == 0)
    {
        return (n +1);
    }
    else if(m > 0 && n == 0)
    {
        return recursiva(m - 1, 1);
    }
    else if(m > 0 && n > 0)
    {
        return recursiva(m-1, recursiva(m,n-1));
    }
}