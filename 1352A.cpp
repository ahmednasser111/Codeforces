// Sum of Round Numbers.
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, n, len, count, test;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        cin >> n;
        count = 0;
        len = trunc(log10(n)) + 1;
        for (int i = 1; i <= len; i++)
        {
            test = n % 10;
            if (test != 0)
            {
                count++;
                ans.push_back(test * pow(10, i) / 10);
            }
            n /= 10;
        }
        cout << count << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
        ans.clear();
    }

    return 0;
}
