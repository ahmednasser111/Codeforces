// Holiday Of Equality
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, max, sum = 0;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);
  max = *max_element(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    sum += max - arr[i];
  }
  printf("%d", sum);
  return 0;
}
