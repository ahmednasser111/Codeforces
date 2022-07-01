// Sereja and Dima
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, sumA = 0, sum = 0;
  scanf("%d", &n);
  int arr[n];
  int f = 0, l = n - 1;
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
    sum += arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[f] >= arr[l])
    {
      if (i % 2 == 0)
        sumA += arr[f];
      f++;
    }
    else
    {
      if (i % 2 == 0)
        sumA += arr[l];
      l--;
    }
  }
  cout << sumA << " " << sum - sumA;

  return 0;
}
