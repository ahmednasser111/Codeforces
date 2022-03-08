#include <iostream>
using namespace std;
int min_moves(int a, int b)
{
    int subtract = abs(a - b);
    if (a == b)
    {
        return 0;
    }
    else if (a > b)
    {
        if (subtract & 1)
            return 2;
        else
            return 1;
    }
    else
    {
        if (subtract & 1)
            return 1;
        else
            return 2;
    }
}
int main(int argc, char const *argv[])
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << min_moves(a, b) << "\n";
    }

    return 0;
}
