// Police
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n, c = 0, sum = 0;
    cin >> n;
    int police[n];
    for (int i = 0; i < n; i++)
    {
        cin >> police[i];
        if (police[i] == -1)
        {
            if (sum <= 0)
            {
                c++;
            }
            else
                sum--;
        }
        else
        {
            sum += police[i];
        }
    }
    cout << c;
    return 0;
}
