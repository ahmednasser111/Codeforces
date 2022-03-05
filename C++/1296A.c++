#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, len, x, odd;
    cin >> t;
    while (t--)
    {
        odd = 0;
        cin >> len;
        for (int i = 0; i < len; i++)
        {
            cin >> x;
            if (x & 1)
                odd++;
        }
        if (odd == 0 || ((odd == len) && !(len & 1)))
            cout << "NO"
                 << "\n";
        else
            cout << "YES"
                 << "\n";
    }
    return 0;
}
