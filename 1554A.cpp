// Cherry
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
    int n;
    cin >> n;
    long long arr[n];
    for (int i = 0; i < n; i++)
      cin >> arr[i];
    long long res = arr[0] * arr[1];
    for (int i = 0; i < n - 1; i++)
    {
      long long temp = arr[i] * arr[i + 1];
      if (temp > res)
        res = temp;
    }
    cout << res << endl;
  }
}
