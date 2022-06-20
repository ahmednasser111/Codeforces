// Arrival of the General
#include <bits\stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int arr[n];
  scanf("%d", &arr[0]);
  int maxIndex = 0;
  int minIndex = 0;
  for (int i = 1; i < n; i++)
  {
    scanf("%d", &arr[i]);
    if (arr[i] > arr[maxIndex])
    {
      maxIndex = i;
    }
    if (arr[i] <= arr[minIndex])
    {
      minIndex = i;
    }
  }
  int ans = n - 1 - minIndex + maxIndex;
  if (maxIndex > minIndex)
    ans--;
  cout << ans;

  return 0;
}
