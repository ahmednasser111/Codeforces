// Team
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, x, sum, count;
    count = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            sum += x;
        }
        if (sum > 1)
            count++;
    }
    cout << count << '\n';
    return 0;
}
