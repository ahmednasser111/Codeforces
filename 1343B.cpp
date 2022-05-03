// Balanced Array
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        cin >> n;
        if ((n / 2) & 1)
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            for (int i = 1; i < n - 1; i += 2)
            {
                cout << i << " ";
            }
            cout << n + (n / 2 - 1) << "\n";
        }
    }

    return 0;
}
