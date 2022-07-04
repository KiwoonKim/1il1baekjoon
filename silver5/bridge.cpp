#include <stdio.h>
#include <stdlib.h>

int combination(int n, int m);
int main()
{
    int test_num;
    int site[2];
    int i = 0;
    int *ret_arr;

    scanf("%d", &test_num);
    ret_arr = (int *)malloc(sizeof(int) * test_num);
    while(i < test_num)
    {
        scanf("%d %d", site, site+1);
        ret_arr[i] = combination(site[1], site[0]);
        i++;
    }
    i = 0;
    while(i < test_num)
    {
        printf("%d\n", ret_arr[i++]);
    }
    free(ret_arr);
    return (0);
}

int combination(int n, int m)
{
    if (n == 1) return (1);
    int comb_arr[30];
    int ret;

    for(int i = 0; i < 30; i++)
    {
        comb_arr[i] = 1;
    }

    for(int j = 0; j < n - m; j++)
    {
        for (int k = 1; k < m + 1; k++)
        {
            comb_arr[k] += comb_arr[k - 1];
        }
    }
    return (comb_arr[m]);
}