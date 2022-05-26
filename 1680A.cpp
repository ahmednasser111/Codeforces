// Minimums and Maximums
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, l1, r1, l2, r2;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &l1);
        scanf("%d", &r1);
        scanf("%d", &l2);
        scanf("%d", &r2);
        if ((l1 <= l2 && l2 <= r1) || (l2 <= l1 && l1 <= r2))
            cout << max(l1, l2) << '\n';
        else
            cout << l1 + l2 << '\n';
    }
    return 0;
}
