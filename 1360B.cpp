// Honest Coach
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, min, temp;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d", &len);
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            scanf("%d", &arr[i]);
        }
        sort(arr, arr + len);
        min = abs(arr[0] - arr[1]);
        for (int i = 1; i < len - 1; i++)
        {
            temp = abs(arr[i] - arr[i + 1]);
            if (temp < min)
                min = temp;
        }
        cout << min << '\n';
    }
    return 0;
}
