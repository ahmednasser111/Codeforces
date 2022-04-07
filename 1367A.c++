// Short Substrings.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    string a, b;

    cin >> t;
    while (t--)
    {
        b = "";

        cin >> a;

        b += a[0];

        for (int i = 1; i < a.length(); i += 2)
            b += a[i];

        cout << b << "\n";
    }
    return 0;
}
