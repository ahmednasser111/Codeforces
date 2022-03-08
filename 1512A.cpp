#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin >> t;
    int count = 0;
    int len;
    int ans[t];
    for (int k = 0; k < t; k++)
    {
        cin >> len;

        int arr[len];
        int c[len];
        fill(c, c + len, 0);
        for (int i = 0; i < len; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < len; i++)
        {
            for (int j = 0; j < len; j++)
            {
                if (i != j)
                {
                    if (arr[i] == arr[j])
                    {
                        c[i]++;
                    }
                }
            }
        }
        for (int i = 0; i < len; i++)
        {
            if (c[i] == 0)
            {
                ans[count] = i + 1;
                count++;
                break;
            }
        }
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
