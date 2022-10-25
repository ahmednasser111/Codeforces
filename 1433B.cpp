// Yet Another Bookshelf
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
    int a[n];
    int c = 0;
    for (int i = 0; i < n; i++)
      scanf("%d", &a[i]);
    for (int i = 0; i < n; i++)
    {
      if (a[i] == 1)
      {
        int temp = 0;
        for (int j = i + 1; j < n; j++)
        {
          if (a[j] == 1)
          {
            c += temp;
            i = j - 1;
            break;
          }
          else
            temp++;
        }
      }
    }
    cout << c << endl;
  }
}
