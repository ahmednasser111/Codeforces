#include <bits\stdc++.h>
using namespace std;
void readArray(int arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}
int main(int argc, char const *argv[])
{
    int t;
    int k, len, sum, n;
    cin >> t;
    while (t--)
    {
        sum = 0;
        cin >> len;
        cin >> k;
        int a[len];
        int b[len];
        readArray(a, len);
        readArray(b, len);
        n = sizeof(a) / sizeof(a[0]);
        sort(a, a + n);
        sort(b, b + n);
        for (int j = 0; j < len; j++)
        {
            if (k > 0 && a[j] < b[len - j - 1])
            {
                sum += b[len - j - 1];
                k--;
            }
            else
                sum += a[j];
        }
        cout << sum << endl;
    }
    return 0;
}
