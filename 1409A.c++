// Yet Another Two Integers Problem.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    long a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (long)ceil(abs(a - b) / 10.0) << "\n";
    }
    return 0;
}
