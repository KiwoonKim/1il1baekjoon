#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n, long long *f_num)
{
    int *f = new int[n];
    int ret;
    *f_num = 0;
    f[0], f[1] = 1;
    for (int i = 2; i < n; i++)
    {
        f[i] = f[i-1] + f[i-2];
        *f_num = *f_num + 1;
    }
    ret = f[n-1];
    delete[] f;
    return(ret);
}

int main()
{
    int n;
    long long fib;
    long long f_num = 0;
    scanf("%d", &n);
    fib = fibonacci(n+1, &f_num);
    fibonacci(n, &f_num);
    printf("%lld %lld", fib % 1000000007, f_num % 1000000007);
    return (0);
}