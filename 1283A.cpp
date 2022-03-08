#include <iostream>
using namespace std;
int newYear(int hours, int minutes)
{
    int all_in_minutes = (hours * 60) + minutes;
    int result = 1440 - all_in_minutes;
    return result;
}
int main(int argc, char const *argv[])
{
    int t, h, m;
    cin >> t;
    int ans[t];
    for (int i = 0; i < t; i++)
    {
        cin >> h >> m;
        ans[i] = newYear(h, m);
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
// Done :D