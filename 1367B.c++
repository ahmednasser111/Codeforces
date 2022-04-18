// Even Array.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, len, evenCount, oddCount, count;
    cin >> t;
    while (t--)
    {
        evenCount = oddCount = count = 0;
        cin >> len;
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
            if (arr[i] % 2 == 0)
                evenCount++;
            else
                oddCount++
        }
        if (evenCount != oddCount && len % 2 == 0)
            cout << -1 << "\n";
        else if (evenCount != oddCount + 1 && len % 2 != 0)
            cout << -1 << "\n";
        else
        {
            for (int i = 0; i < len; i += 2)
            {
                if (arr[i] % 2 != 0)
                    count++;
            }
            cout << count << "\n";
        }
    }
    return 0;
}
