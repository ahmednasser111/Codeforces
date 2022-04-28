// Domino Disaster.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    string str;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> str;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == 'U')
                cout << 'D';
            else if (str[i] == 'D')
                cout << 'U';
            else
                cout << str[i];
        }
        cout << "\n";
    }
    return 0;
}
