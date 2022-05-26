// Robots
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, n, m, x, y;
    bool flag, stop;
    scanf("%d", &t);
    while (t--)
    {
        flag = stop = 1;
        scanf("%d", &n);
        scanf("%d", &m);
        char arr[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> arr[i][j];
                if (stop && arr[i][j] == 'R')
                {
                    stop = 0;
                    x = i;
                    y = j;
                }
            }
        }
        if (n > 1)
        {
            for (int i = x + 1; i < n; i++)
            {
                for (int j = 0; j < y; j++)
                {
                    if (arr[i][j] == 'R')
                    {
                        flag = 0;
                        break;
                    }
                }
            }
        }
        flag ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}