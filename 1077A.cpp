// Frog Jumping.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    long long a, b, k;
    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        cout << (long long)((a * ceil(k / 2.0)) - (b * (k / 2))) << "\n";
    }

    return 0;
}
