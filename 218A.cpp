// Mountain Scenery
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  int n, k;
  scanf("%d %d", &n, &k);
  int size = n * 2 + 1;
  int a[n * 2 + 1];
  for (int i = 0; i < size; i++)
    scanf("%d", &a[i]);
  for (int i = 1; i < size; i += 2)
    if (k > 0 && a[i] - 1 > max(a[i - 1], a[i + 1]))
    {
      a[i]--;
      k--;
    }
  for (int i = 0; i < size; i++)
    cout << a[i] << ' ';
  cout << endl;
}
