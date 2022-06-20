// Required Remainder
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    long long x, y, n;
    cin >> t;
    while (t--)
    {
        cin >> x >> y >> n;
        int temp = n / x;
        int k = x * temp + y;
        if (k > n)
            k -= x;
        cout << k << "\n";
    }
    return 0;
}
