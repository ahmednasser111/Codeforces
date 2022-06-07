// Nearly Lucky Number
#include <bits\stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  string number;
  cin >> number;
  int count = 0;
  for (int i = 0; i < number.length(); i++)
  {
    if (number[i] == '4' || number[i] == '7')
      count++;
    if (count > 7)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  if (count == 4 || count == 7)
    cout << "YES" << endl;
  else
    cout << "NO" << endl;

  return 0;
}
