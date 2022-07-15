// Twins
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int arr[n];
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  sort(arr, arr + n);
  int minCoins = 0;
  int minSum = 0;
  for (int i = n - 1; i >= 0; i--)
  {
    minSum += arr[i];
    minCoins++;
    if (minSum > sum - minSum)
      break;
  }
  cout << minCoins << endl;
  return 0;
}
