// Replacing Elements
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n, d;
    bool flag = true;
    scanf("%d %d", &n, &d);
    int arr[n];
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    sort(arr, arr + n);
    if (arr[n - 1] <= d || arr[0] + arr[1] <= d)
      cout << "YES\n";
    else
      cout << "NO\n";
  }
}
