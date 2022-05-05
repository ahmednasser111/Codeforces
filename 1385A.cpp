// Three Pairwise Maximums
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, count, Max, Min;
    int arr[3];
    scanf("%d", &t);
    while (t--)
    {
        count = 0;
        scanf("%d%d%d", &arr[0], &arr[1], &arr[2]);

        Max = *max_element(arr, arr + 3);
        Min = *min_element(arr, arr + 3);

        for (int i = 0; i < 3; i++)
        {
            if (arr[i] == Max)
                count++;
        }
        if (count == 1)
            cout << "NO\n";
        else
            cout << "YES\n"
                 << Max << " " << Min << " " << Min << '\n';
    }
    return 0;
}
