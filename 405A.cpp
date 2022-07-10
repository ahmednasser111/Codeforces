// Gravity Flip
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  sort(arr, arr + n);

  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
}
