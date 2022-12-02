#include <stdio.h>

int Recursive(int n)
{
    int start = 100;

    if (n <= 1)
    {
        return start;
    }

    return Recursive(n - 1) * 2 - 50;
}

int main()
{
    int n = 8;
    int money = 0;

    money = Recursive(n);

    for (int i = 1; i <= n; i++)
    {
        money = Recursive(i);
        printf("%dŽžŠÔ:%d‰~\n", i, money);
    }

    return 0;
}