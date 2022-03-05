#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, c1, c2, n;
    cin >> t;
    int ans1[t];
    int ans2[t];
    for (int i = 0; i < t; i++)
    {
        cin >> n;

        c2 = round(n / 3.0);
        c1 = n - c2 * 2;

        ans1[i] = c1;
        ans2[i] = c2;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans1[i] << " " << ans2[i] << "\n";
    }

    return 0;
}
