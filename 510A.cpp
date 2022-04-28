#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, m;
    bool flag = true;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << "#";
        }

        cout << "\n";
        i++;

        if (i < n - 1)
        {
            if (!flag)
                cout << "#";
            for (int q = 0; q < m - 1; q++)
                cout << ".";

            if (flag)
            {
                cout << "#";
                flag = !flag;
            }
            else
                flag = !flag;
            cout << "\n";
        }
    }

    return 0;
}
