// Maximum in Table
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  int arr[n][n];
  for (int i = 0; i < n; i++)
    arr[0][i] = 1, arr[i][0] = 1;

  for (int i = 1; i < n; i++)
    for (int j = 1; j < n; j++)
      arr[i][j] = arr[i - 1][j] + arr[i][j - 1];

  cout << arr[n - 1][n - 1];
}
