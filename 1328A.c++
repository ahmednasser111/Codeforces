// Divisibility Problem
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int a, b, ans;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %d", &a, &b);

        ans = a % b;

        if (ans != 0)
            ans = b - ans;

        cout << ans << "\n";
    }
    return 0;
}
