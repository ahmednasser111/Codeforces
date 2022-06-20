// Floor Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, floor;
    double n, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        if (n < 3)
            floor = 1;
        else
            floor = ceil((n - 2) / x) + 1;
        cout << floor << '\n';
    }
    return 0;
}
