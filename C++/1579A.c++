#include <iostream>
using namespace std;
string Casimir(string str)
{
    int len = str.length();
    int occ[3];
    fill(occ, occ + 3, 0);
    for (int i = 0; i < len; i++)
    {
        if (str[i] == 'A')
        {
            occ[0]++;
        }
        else if (str[i] == 'B')
        {
            occ[1]++;
        }
        else
        {
            occ[2]++;
        }
    }
    if (occ[1] == occ[0] + occ[2])
    {
        return "YES";
    }
    else
        return "NO";
}
int main(int argc, char const *argv[])
{
    int t;
    string str;
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> str;
        ans[i] = Casimir(str);
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
