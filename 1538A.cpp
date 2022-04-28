// Stone Game.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, result, Max, Min;
    cin >> t;
    while (t--)
    {
        cin >> len;
        int stones[len];
        for (int i = 0; i < len; i++)
            cin >> stones[i];
        Max = max_element(stones, stones + len) - stones;
        Min = min_element(stones, stones + len) - stones;

        result = min({max(Max, Min) + 1, max(len - Max, len - Min), Min + 1 + len - Max, Max + 1 + len - Min});

        cout << result << "\n";
    }
    return 0;
}
