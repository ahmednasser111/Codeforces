// ABC.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> len;
        cin >> str;
        if (len == 1)
            cout << "YES\n";
        else if (len == 2)
            cout << ((str[0] != str[1]) ? "YES\n" : "NO\n");
        else
            cout << "NO\n";
    }
    return 0;
}
