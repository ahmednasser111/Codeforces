// Cypher
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
    for (int i = 0; i < n; i++)
    {
      int x;
      string s;
      scanf("%d", &x);
      cin >> s;
      for (int j = 0; j < x; j++)
      {
        if (s[j] == 'U')
          arr[i]--;
        else
          arr[i]++;
      }
      if (arr[i] > 9 || arr[i] < 0)
        arr[i] = abs(abs(arr[i]) - 10);
      cout << arr[i] << " ";
    }
    cout << "\n";
  }
}
