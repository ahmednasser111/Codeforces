// And Then There Were K.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n, sum, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        sum = 0;
        c = 0;
        while (n > sum)
        {
            c = sum;
            sum = 2 * sum + 1;
        }
        cout << c << "\n";
    }
    return 0;
}
