// Food for Animals
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t;
    int a, b, c, x, y;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d%d%d%d", &a, &b, &c, &x, &y);
        x = max(x - a, 0);
        y = max(y - b, 0);
        (c >= x + y) ? cout << "YES\n" : cout << "NO\n";
    }
    return 0;
}
