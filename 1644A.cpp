// Doors and Keys.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len;
    bool flag;
    string str;
    cin >> t;
    while (t--)
    {
        flag = true;
        cin >> str;
        len = str.size();
        for (int i = 0; i < len; i++)
        {
            if (isupper(str[i]))
            {
                for (int j = 0; j <= i; j++)
                {
                    if (j == i)
                    {
                        flag = false;
                        break;
                    }
                    if (str[j] - 32 == str[i])
                    {
                        str[j] = 0;
                        str[i] = 0;
                        break;
                    }
                }
            }
            if (!flag)
                break;
        }
        if (flag)
            cout << "YES"
                 << "\n";
        else
            cout << "NO"
                 << "\n";
    }

    return 0;
}
