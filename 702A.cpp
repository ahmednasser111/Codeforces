// Maximum Increase
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int a[n];
  int max_inc = 1;
  int temp = 1;
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (int i = 0; i < n - 1; i++)
  {
    if (a[i] < a[i + 1])
    {
      temp++;
      max_inc = max(max_inc, temp);
    }
    else
      temp = 1;
  }
  cout << max(max_inc, temp);
}
