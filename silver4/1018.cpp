#include <stdio.h>

int main()
{
    int row;
    int col;

    scanf("%d %d", &row, &col);

    int **mat = nullptr;
    mat = new int*[row + 1];
    for(int i = 0; i < row; i++)
    {
        mat[i] = new int[col + 1];
        char *c = new char[col + 1];
        scanf("%s", c);
        for(int j = 0; j < col; j++)
        {
            if (c[j] == 'W') {mat[i][j] = 1;}
            else if (c[j] == 'B') {mat[i][j] = -1;}
        }
        delete[] c;
    }
    int ret = 0;
    int min_ret = 1250;
    int right = 1;
    for(int k = 0; k <= row - 8; k++)
    {
        for(int n = 0; n <= col - 8; n++)
        {
            right = mat[k][n];
            for(int rev = 0; rev < 2; rev++)
            {
                ret = 0;
                if(rev) {right *= -1;}
                for(int y = k; y < k + 8; y++)
                {
                    for(int x = n; x < n + 8; x++)
                    {
                        if(mat[y][x] != right) 
                        {
                            ret++;
                        }
                        right *= -1;
                    }
                    right *= -1;
                }
                if (ret < min_ret) {min_ret = ret;}
            }
        }
    }
    printf("%d", min_ret);
    for(int i = 0; i < row; i++)
    {
        delete[] mat[i];
    }
    delete[] mat;
}