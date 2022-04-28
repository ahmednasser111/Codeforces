// Word.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    int len = s.length();
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (isupper(s[i]))
            count++;
    }
    if (count > (len / 2))
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    else
        transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s;
    return 0;
}
