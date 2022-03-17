#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n;
    while (t--)
    {
        cin >> n;
        int r = log10(n);
        int tmp = 0;
        for (int i = 0; i < r + 1; i++)
        {
            tmp = tmp * 10 + 1;
        }
        cout << (r * 9 + n / tmp) << "\n";
    }
    return 0;
}