#include <bits\stdc++.h>
using namespace std;
void readArray(long long arr[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
}
int findMin(long long arr[], int len)
{
    int min = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main(int argc, char const *argv[])
{
    int t;
    long long len, count, temp, minA, minB;
    cin >> t;
    while (t--)
    {
        count = 0;
        cin >> len;
        long long a[len];
        long long b[len];
        readArray(a, len);
        readArray(b, len);

        minA = findMin(a, len);
        minB = findMin(b, len);

        for (int i = 0; i < len; i++)
        {
            if (minA < a[i] && minB < b[i])
            {
                temp = (a[i] - minA) > (b[i] - minB) ? b[i] - minB : a[i] - minA;
                count += abs((a[i] - minA) - (b[i] - minB)) + temp;
            }
            else if (minA < a[i])
                count += a[i] - minA;
            else if (minB < b[i])
                count += b[i] - minB;
        }
        cout << count << endl;
    }
    return 0;
}
