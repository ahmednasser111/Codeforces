#include <bits/stdc++.h>
using namespace std;

string remove(int input[], int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == 0)
        {
            continue;
        }

        for (int j = 0; j < len; j++)
        {
            if (input[j] == 0)
            {
                continue;
            }

            if (i == j)
                continue;
            if (abs(input[i] - input[j]) <= 1)
            {
                if (input[i] > input[j])
                {
                    input[j] = 0;
                }
                else
                {
                    input[i] = 0;
                }
            }
        }
    }
    for (int i = 0; i < len; i++)
    {
        if (input[i] != 0)
        {
            count++;
        }
    }
    if (count <= 1)
    {
        return "YES";
    }
    else
        return "NO";
}
int main(int argc, char const *argv[])
{
    int t, len;
    cin >> t;
    while (t--)
    {
        cin >> len;
        int input[len];
        for (int i = 0; i < len; i++)
        {
            cin >> input[i];
        }
        int n = sizeof(input) / sizeof(input[0]);
        sort(input, input + n);
        cout << remove(input, len) << "\n";
    }

    return 0;
}
