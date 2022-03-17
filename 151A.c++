// Review site.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n, x, c = 0;
    cin >> t;
    while (t--)
    {
        c = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 2)
            {
                c++;
            }
        }
        cout << n - c << "\n";
    }

    return 0;
}
