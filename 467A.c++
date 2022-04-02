// George and Accommodation.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x, y, result = 0;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        if (y - x >= 2)
            result++;
    }
    cout << result;

    return 0;
}
