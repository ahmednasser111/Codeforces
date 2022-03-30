// Vanya and Fence.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, h, x, result = 0;
    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        result += (x > h) ? 2 : 1;
    }
    cout << result;

    return 0;
}
