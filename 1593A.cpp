// Elections.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, MAX, c;
    int candidates[3];
    cin >> t;
    while (t--)
    {
        c = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> candidates[i];
        }
        MAX = max({candidates[0], candidates[1], candidates[2]});
        for (int i = 0; i < 3; i++)
        {
            if (candidates[i] == MAX)
                c++;
        }
        for (int i = 0; i < 3; i++)
        {
            if (c == 1 && candidates[i] == MAX)
                cout << 0 << " ";
            else
                cout << MAX - candidates[i] + 1 << " ";
        }
        cout << "\n";
    }

    return 0;
}
