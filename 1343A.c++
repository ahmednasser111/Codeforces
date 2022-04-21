// A. Candies
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int n, x, k;
    cin >> t;
    while (t--)
    {
        k = 1;
        x = 0;
        cin >> n;
        while (n != -x * (1 - pow(2, k)))
        {
            k++;
            x = -n / (1 - pow(2, k));
        }
        cout << x << endl;
    }
    return 0;
}
