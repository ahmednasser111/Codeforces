#include <iostream>
#include <string>
#include <string.h>
using namespace std;
string isSquare(string s)
{
    int len = (s.length()) / 2;
    if (s.length() % 2 != 0)
    {
        return "NO\n";
    }
    else
    {
        for (int i = 0; i < len; i++)
        {
            if (s[i] != s[len + i])
            {
                return "NO\n";
            }
        }
    }
    return "YES\n";
}
int main()
{
    string s;
    int re;
    cin >> re;
    int count = 0;
    string answer[re];
    while (count < re)
    {
        cin >> s;
        answer[count] = isSquare(s);
        count++;
    }
    for (int i = 0; i < count; i++)
    {
        cout << answer[i];
    }
    return 0;
}