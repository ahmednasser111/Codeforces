// Way Too Long Words.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    string s;
    int len;
    while (t--)
    {
        cin >> s;
        len = s.length();
        if (len > 10)
            cout << s[0] << (len - 2) << s[len - 1] << "\n";
        else
            cout << s << "\n";
    }

    return 0;
}
