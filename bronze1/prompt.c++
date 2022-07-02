#include <stdio.h>
#include <stdlib.h>
#include <cstring>
char *ret_str(int num, char **str);
void str_copy(char *str1, char *str2);

int main ()
{
    int i = 0;
    int num;
    char **name;
    scanf("%d", &num);
    name = (char **)malloc(sizeof(char *) * (num + 1));
    name[num] = 0;
    while(i < num)
    {
        name[i] = (char *)malloc(sizeof(char) * 51);
        scanf("%s", name[i]);
        i++;
    }
    char *ret;
    ret = (char *)malloc(sizeof(char) * (strlen(name[0]) + 1));
    ret = ret_str(num, name);
    printf("%s\n", ret);
}

char *ret_str(int num, char **str)
{
    char *ret;
    const int len = strlen(str[0]);
    ret = (char *)malloc(sizeof(char) * (len + 1));
    str_copy(ret, str[0]);
    int i = 0;
    int j;
    while (i < num - 1)
    {
        j = 0;
        while (j < len)
        {
            if (ret[j] - str[i+1][j] != 0)
            {
                ret[j] = '?';
            }
            j++;
        }
        i++;
    }
    return (ret);
}

void str_copy(char *str1, char *str2)
{
    int len = strlen(str2);
    int i;
    i = 0;

    while (i < len)
    {
        str1[i] = str2[i];
        i++;
    }
    str1[i] = '\0';
}