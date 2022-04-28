#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len;
    cin >> t;
    string ans[t];
    string str;
    bool flag = false;
    for (int i = 0; i < t; i++)
    {
        flag = false;
        cin >> len;
        cin >> str;
        if (len > 2)
        {
            for (int j = 0; j < len; j++)
            {
                for (int k = j + 1; k < len; k++)
                {
                    if (str[j] != str[k])
                    {
                        for (int q = k; q < len; q++)
                        {
                            if (str[j] == str[q])
                            {
                                ans[i] = "NO";
                                flag = true;
                                break;
                            }
                        }
                    }
                }
            }
            if (!flag)
            {
                ans[i] = "YES";
            }
        }
        else
            ans[i] = "YES";
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
