// Puzzles
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, m;
  scanf("%d %d", &n, &m);
  int arr[m];
  for (int i = 0; i < m; i++)
    scanf("%d", &arr[i]);
  sort(arr, arr + m);
  int min = 1000;
  for (int j = 0; j <= m - n; j++)
  {
    int ans = 0;
    for (int i = j; i < j + n - 1; i++)
      ans += arr[i + 1] - arr[i];
    if (ans < min)
      min = ans;
  }
  cout << min;
}
