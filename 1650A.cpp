// Deletions of Two Adjacent Letters.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len;
    string s;
    char c;
    bool flag;
    cin >> t;
    while (t--)
    {
        cin >> s;
        cin >> c;
        len = s.length();
        flag = false;
        for (int i = 0; i < len; i++)
        {
            if (s[i] == c && i % 2 == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }

    return 0;
}
