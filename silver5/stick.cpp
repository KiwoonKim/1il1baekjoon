#include <stdio.h>

int main()
{
    int X;
    int ret;
    int init = 64;
    scanf("%d", &X);
    ret = 0;
    while (X != 0)
    {
        if (X < init)
            init /= 2;
        else
        {
            X -= init;
            ret++;
        }
    }
    printf("%d", ret);
}