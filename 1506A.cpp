#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    long long int n, m, x;
    long long a, b;
    cin >> t;
    while (t--)
    {
        cin >> n >> m >> x;
        a = (x - 1) % n;
        b = (x - 1) / n;
        cout << a * m + b + 1 << "\n";
    }

    return 0;
}
