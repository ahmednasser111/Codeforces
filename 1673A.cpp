// Subtle Substring Subtraction
#include <bits\stdc++.h>
#include <cstdio>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, sum, ans;
    string s, winner;
    scanf("%d", &t);
    while (t--)
    {
        sum = 0;
        winner = "Alice ";
        cin >> s;
        len = s.length();
        for (int i = 0; i < len; i++)
        {
            sum += s[i] - 96;
        }
        if (len == 1)
            winner = "Bob ";
        if (len & 1 && len != 1)
            ans = max(sum - 2 * (s[0] - 96), sum - 2 * (s[len - 1] - 96));
        else
            ans = sum;
        cout << winner << ans << '\n';
    }

    return 0;
}
