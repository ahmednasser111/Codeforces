// Array Balancing.
#include <bits\stdc++.h>
using namespace std;

void readArray(int len, int arr[])
{
    for (int i = 0; i < len; i++)
        cin >> arr[i];
}

int main(int argc, char const *argv[])
{
    int t, len, min;
    long long sum;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> len;
        int a[len];
        int b[len];
        readArray(len, a);
        readArray(len, b);
        for (int i = 0; i < len; i++)
        {
            if (b[i] < a[i])
            {
                swap(a[i], b[i]);
            }
        }

        for (int i = 0; i < len - 1; i++)
        {
            min = abs(a[i] - a[i + 1]) + abs(b[i] - b[i + 1]);

            sum += min;
        }

        cout << sum << "\n";
    }
    return 0;
}
