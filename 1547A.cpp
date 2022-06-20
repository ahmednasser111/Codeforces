// Shortest Path with Obstacle
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int a1, a2, b1, b2, f1, f2;
    int max1, max2, min1, min2;
    int ans;
    cin >> t;
    while (t--)
    {
        cin >> a1 >> a2;
        cin >> b1 >> b2;
        cin >> f1 >> f2;

        max1 = max(a1, b1);
        max2 = max(a2, b2);
        min1 = (max1 == a1) ? b1 : a1;
        min2 = (max2 == a2) ? b2 : a2;

        if (a1 == b1 && a1 == f1 && (f2 >= min2 && f2 <= max2))
        {
            ans = abs(a2 - b2) + 2;
        }
        else if (b2 == a2 && a2 == f2 && (f1 >= min1 && f1 <= max1))
        {
            ans = abs(a1 - b1) + 2;
        }
        else
        {
            ans = abs(a1 - b1) + abs(a2 - b2);
        }
        cout << ans << endl;
    }
    return 0;
}
