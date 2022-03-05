#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, f_max_index = 0, s_max_index;
    int tournament[4];
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++)
    {
        f_max_index = 0;

        for (int j = 0; j < 4; j++)
        {
            cin >> tournament[j];
        }
        for (int j = 0; j < 4; j++)
        {
            if (tournament[j] > tournament[f_max_index])
            {
                f_max_index = j;
            }
        }
        s_max_index = abs(f_max_index - 1);
        for (int j = 0; j < 4; j++)
        {
            if (j == f_max_index)
            {
                continue;
            }

            if (tournament[j] > tournament[s_max_index])
            {
                s_max_index = j;
            }
        }
        if ((f_max_index > 1 && s_max_index < 2) || (s_max_index > 1 && f_max_index < 2))
        {
            ans[i] = "YES";
        }
        else
            ans[i] = "NO";
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
