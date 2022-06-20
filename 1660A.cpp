#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        if (a == 0)
            cout << 1 << "\n";
        else
            cout << a + b * 2 + 1 << "\n";
    }
    return 0;
}
