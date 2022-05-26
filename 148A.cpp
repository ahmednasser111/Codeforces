// Insomnia cure
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int d, sum = 0;
    int arr[4];
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &d);
    for (int i = 1; i <= d; i++)
    {
        if (i % arr[0] && i % arr[1] && i % arr[2] && i % arr[3])
            sum++;
    }
    cout << d - sum;
    return 0;
}
