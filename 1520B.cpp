// FALSE
#include <iostream>
using namespace std;
int ordinary(int number)
{
    if (number < 10)
    {
        return number;
    }
    int count = 0;
    for (int i = 0; i <= number; i = i * 10 + 1)
    {
        count++;
    }

    return count;
}
int main(int argc, char const *argv[])
{
    int t, number;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> number;
        ans[i] = ordinary(number);
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
