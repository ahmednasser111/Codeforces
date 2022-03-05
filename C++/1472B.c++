#include <iostream>
using namespace std;
bool isdub(int arr[], int len)
{

    for (int i = 1; i < len; i++)
    {
        if (arr[0] != arr[i])
        {
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    int t, len, sum = 0;
    cin >> t;
    string ans[t];
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        cin >> len;
        int candies[len];
        for (int j = 0; j < len; j++)
        {
            cin >> candies[j];
        }
        if (len % 2 != 0 && isdub(candies, len))
        {
            ans[i] = "NO";
        }
        else
        {
            for (int j = 0; j < len; j++)
            {
                sum += candies[j];
            }
            if (sum % 2 == 0)
            {
                ans[i] = "YES";
            }
            else
                ans[i] = "NO";
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
