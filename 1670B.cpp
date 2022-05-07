// Dorms War
#include <bits/stdc++.h>
using namespace std;
char special[26];
int main()
{
    int t, n, k;
    string s;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &n);
        cin >> s;
        scanf("%d", &k);

        for (int i = 0; i < k; i++)
            cin >> special[i];

        int previous = 0;
        int Max = 0;
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < k; j++)
                if (s[i] == special[j])
                {
                    Max = max(Max, i - previous);
                    previous = i;
                }
        }
        cout << Max << '\n';
    }
    return 0;
}