// Arithmetic Array.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, length, x, sum = 0;
    cin >> t;
    while (t--)
    {
        cin >> length;
        sum = 0;
        for (int i = 0; i < length; i++)
        {
            cin >> x;
            sum += x;
        }
        if (sum < length)
            cout << 1 << "\n";
        else
            cout << sum - length << "\n";
    }

    return 0;
}
