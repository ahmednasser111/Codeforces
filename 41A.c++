// Translation.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s, t;
    cin >> s;
    cin >> t;
    int len = s.length();
    for (int i = 0; i < len; i++)
    {
        if (s[i] != t[len - i - 1])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
