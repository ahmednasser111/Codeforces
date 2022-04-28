// Minimal Square
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int a, b;
    int Max, Min, area;
    cin >> t;
    while (t--)
    {
        scanf("%d%d", &a, &b);

        Max = max(a, b);
        Min = min(a, b);

        area = max(Min + Min, Max);

        cout << area * area << "\n";
    }
    return 0;
}
