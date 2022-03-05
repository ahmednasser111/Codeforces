#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, c, c1;
    cin >> t;
    while (t--)
    {
        cin >> len;
        int seq[len];
        for (int i = 0; i < len; i++)
        {
            cin >> seq[i];
        }

        int ans[len];
        c1 = 2;
        c = 1;
        ans[0] = seq[0];
        if (len % 2 != 0)
        {
            for (int i = len - 1; i > len / 2; i--)
            {
                ans[c] = seq[i];
                c += 2;
            }
        }
        else
        {
            for (int i = len - 1; i >= len / 2; i--)
            {
                ans[c] = seq[i];
                c += 2;
            }
        }
        for (int i = 1; i < len - (len / 2); i++)
        {
            ans[c1] = seq[i];
            c1 += 2;
        }

        for (int i = 0; i < len; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
