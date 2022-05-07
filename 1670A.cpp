// Prof. Slim
#include <bits\stdc++.h>
using namespace std;
int main()
{
    int t, n, count;
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            if (arr[i] < 0)
            {
                count++;
                arr[i] = -arr[i];
            }
        }
        for (int i = 0; i < count; i++)
            arr[i] = -arr[i];

        is_sorted(arr, arr + n) ? cout << "YES" : cout << "NO";
        cout << '\n';
    }
    return 0;
}
