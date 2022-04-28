// Pangram
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int len, counter = 0;
    string str;
    cin >> len;
    cin >> str;
    if (len < 26)
    {
        cout << "NO\n";
        return 0;
    }

    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());
    for (int i = 0; i < len; i++)
    {
        if (str[i] != str[i + 1])
            counter++;
    }
    if (counter == 26)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
