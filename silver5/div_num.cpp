#include <stdio.h>

int main()
{
    int A;
    int B;
    int N;
    int div;
    int mod;
    scanf("%d %d %d", &A, &B, &N);
    mod = A % B;
    for(int i = 0; i < N; i++)
    {
        mod = mod * 10;
        div = mod / B;
        mod = mod % B;   
    }
    printf("%d", div);    
}