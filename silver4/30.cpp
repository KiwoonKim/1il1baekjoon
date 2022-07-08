#include <stdio.h>
#include <algorithm>

using namespace std;

bool compare(int x, int y);
char* is_30(char *str);

int main()
{
    char num[100000];
    int i;
    scanf("%s", num);
    printf("%s", is_30(num)); 
}

char* is_30(char* str)
{
    char* temp;
    long long int sum;
    int is_zero = 0;
    int mod = 0;
    temp = str;
    while (*temp)
    {
        if (*temp == '0')
            is_zero = 1;
        mod += (*temp - '0');
        mod %= 3;
        temp++;
    }
    if (is_zero == 0 || mod != 0)
    {
        str[0] = '-';
        str[1] = '1';
        str[2] = '\0';
        return (str);
    }
    sort(str, temp, compare);
    return str;
}

bool compare (int x, int y)
{
    return x > y;
}