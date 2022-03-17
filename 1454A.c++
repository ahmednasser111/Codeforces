// Special Permutation.
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << n / 2 + 1 << " ";
        for (int i = n; i >= 1; i--)
        {
            if (i == n / 2 + 1)
            {
                continue;
            }

            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
