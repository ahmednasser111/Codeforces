// Eshage Loves Big Arrays
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    sort(arr, arr + n);
    int i = 0;
    while (arr[0] == arr[i])
      i++;
    cout << n - i << "\n";
  }
}
