// Equal Candies
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int t, n, sum, Min;

  scanf("%d", &t);
  while (t--)
  {
    sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);

    Min = *min_element(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
      sum += arr[i] - Min;
    }
    cout << sum << '\n';
  }
  return 0;
}
