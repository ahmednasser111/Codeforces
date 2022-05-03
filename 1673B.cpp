// A Perfectly Balanced String
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    string s;
    bool ans;
    scanf("%d", &t);
    while (t--)
    {
        ans = 1;
        cin >> s;
        set<char> unique;
        for (char c : s)
        {
            unique.insert(c);
        }
        int count = unique.size();
        for (int i = count; i < s.size(); i++)
        {
            if (s[i - count] != s[i])
            {
                ans = 0;
            }
        }
        (ans) ? cout << "YES" : cout << "NO";
        cout << '\n';
    }
    return 0;
}
