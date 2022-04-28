// Hit the Lottery
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    int count = 0;
    int arr[] = {100, 20, 10, 5};
    cin >> n;

    for (int i = 0; i < 4; i++)
    {
        count += n / arr[i];
        n %= arr[i];
    }
    count += n;

    cout << count << '\n';
    return 0;
}
