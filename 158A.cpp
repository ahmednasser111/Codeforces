// Next Round
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, k, count = 0;

    scanf("%d %d", &n, &k);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i <= n; i++)
    {
        if (i >= k)
            if (arr[i] == arr[i - 1] && arr[i] != 0)
            {
                count++;
                continue;
            }
            else
                break;

        if (arr[i] != 0)
            count++;
    }

    cout << count;
    return 0;
}
