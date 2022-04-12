#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        n = pow(2, n);
        cout << n - 1 << "\n";
    }
    return 0;
}
