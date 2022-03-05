#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    int num, tar;
    int c;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        c = 1;
        cin >> num;
        for (int j = 1; j <= num; j++)
        {
            if (c % 3 == 0 || c % 10 == 3)
            {
                j--;
            }
            if (j != num)
            {
                c++;
            }
        }
        ans[i] = c;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
