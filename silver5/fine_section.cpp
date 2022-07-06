#include <stdio.h>

int main(){
    int l;
    int s[50];
    int n;

    scanf("%d", &l);
    for (int i = 0; i < l; i++)
    {
        scanf("%d ", &s[i]);
    }
    scanf("%d", &n);

    int prev_n = 0;
    int next_n = 1000;
    for (int j = 0; j < l; j++)
    {
        if ((s[j] < next_n)&&(s[j] >= n)) next_n = s[j];
        else if((s[j] > prev_n)&&(s[j] <= n)) prev_n = s[j];
    }
    if (l == 1)
    {
        if(s[0] > 2)
            printf("%d", s[0] - 2);
        else printf("%d", 0);
        return (0);
    }   
    if (prev_n != n && next_n != n)
        printf("%d", (n - prev_n) * (next_n - n) - 1);
    else
        printf("%d", 0);
    return (0);
}