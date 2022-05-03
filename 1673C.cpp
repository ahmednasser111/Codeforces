// Palindrome Basis
#include <bits/stdc++.h>
using namespace std;
long long dp[40001];
int main()
{
    int t;
    cin >> t;
    dp[0] = 1;
    for (int i = 1; i <= 40000; i++)
    {
        int i2 = i;
        int tmp = 0;
        while (i2)
        {
            tmp = tmp * 10;
            tmp += i2 % 10;
            i2 = i2 / 10;
        }
        if (i != tmp)
            continue;
        for (int j = i; j <= 40000; j++)
        {
            dp[j] += dp[j - i];
            dp[j] %= 1000000000 + 7;
        }
    }
    while (t--)
    {
        int n;
        cin >> n;
        cout << dp[n] << endl;
    }
}