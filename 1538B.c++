// Friends and Candies.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, sum, count;
    int ans;
    cin >> t;
    while (t--)
    {
        sum = count = 0;
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        if (sum % len == 0)
        {
            ans = sum / len;
            for (int i = 0; i < len; i++)
            {
                if (arr[i] > ans)
                    count++;
            }
            cout << count << "\n";
        }
        else
            cout << -1 << "\n";
    }
    return 0;
}
