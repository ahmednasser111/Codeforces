// Triple
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
    int x = -1;
    for (int i = 0; i < n; i++)
      scanf("%d", &arr[i]);
    sort(arr, arr + n);
    int c = 1;
    for (int i = 0; i < n; i++)
    {

      if (arr[i] == arr[i + 1])
        c++;
      else
        c = 1;

      if (c == 3)
      {
        x = arr[i];
        break;
      }
    }
    cout << x << "\n";
  }
}
