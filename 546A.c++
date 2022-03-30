// Soldier and Bananas
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int k, n, w;

    cin >> k >> n >> w;

    // The sum from 1 to (w) times (k).
    int price = (w + 1) * w * k / 2;

    if (price > n)
        cout << price - n;
    else
        cout << 0;

    return 0;
}
