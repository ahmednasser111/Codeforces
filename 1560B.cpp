#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, a, b, c, total;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> c;
        total = 2 * abs(a - b);
        if (a > total || b > total || c > total)
        {
            cout << -1 << "\n";
        }
        else
        {
            if (c > total / 2)
                cout << c - total / 2 << "\n";
            else
                cout << c + total / 2 << "\n";
        }
    }

    return 0;
}
