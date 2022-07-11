#include <stdio.h>
#include <stack>

using namespace std;

int main()
{
    int num;
    long long h = 0;
    long long ret = 0;
    scanf("%d", &num);

    stack<long long> roof;
    for(int i = 0; i < num; i++)
    {
        scanf("%lld", &h);
        while(!roof.empty())
        {
            if(roof.top() <= h) roof.pop();
            else break;
        }
        roof.push(h);
        ret += (long long)roof.size() - 1;
    }
    printf("%lld",ret);
    return (0);
}