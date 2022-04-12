// Boring Apartments.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, x, len;
    cin >> t;
    while (t--)
    {
        cin >> x;
        len = to_string(x).length();
        cout << ((x % 10) - 1) * 10 + (len * (len + 1) / 2) << "\n";
    }
    return 0;
}
