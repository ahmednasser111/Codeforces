// Cakeminator
#include <bits\stdc++.h>
using namespace std;
int main()
{
  int r, c, counter = 0, nrow = 0;
  bool f = 1;
  scanf("%d%d", &r, &c);
  string x[r];
  for (int i = 0; i < r; i++)
    cin >> x[i];
  for (int i = 0; i < r; i++)
  {
    if (x[i].find('S') != -1)
      f = 0;
    if (f)
    {
      counter += c;
      nrow++;
    }
    f = 1;
  }
  for (int i = 0; i < c; i++)
  {
    for (int j = 0; j < r; j++)
      if (x[j][i] == 'S')
      {
        f = 0;
        break;
      }
    if (f)
      counter += r - nrow;
    f = 1;
  }
  cout << counter << endl;
}