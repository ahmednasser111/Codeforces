#include <iostream>
using namespace std;
string sheet(int w, int h, int n)
{
    int n_sheets = 1;
    while (n > n_sheets)
    {
        if (w % 2 == 0)
        {
            n_sheets *= 2;
            w /= 2;
        }
        else if (h % 2 == 0)
        {
            n_sheets *= 2;
            h /= 2;
        }
        else
            return "NO";
    }
    return "YES";
}
int main(int argc, char const *argv[])
{
    int t, w, h, n;
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> w >> h >> n;
        ans[i] = sheet(w, h, n);
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
