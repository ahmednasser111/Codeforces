#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, max, len, min;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> len;
        int arr[len];
        for (int j = 0; j < len; j++)
        {
            cin >> arr[j];
        }
        max = arr[0];
        min = arr[0];
        for (int j = 1; j < len; j++)
        {
            if (max < arr[j])
                max = arr[j];
            if (min > arr[j])
                min = arr[j];
        }
        ans[i] = max - min;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
