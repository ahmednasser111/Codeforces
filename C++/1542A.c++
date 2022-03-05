#include <iostream>
using namespace std;
string isOdd(int input[], int size)
{
    int o = 0, e = 0;
    for (int i = 0; i < size; i++)
    {
        if (input[i] % 2 == 1)
        {
            o++;
        }
        else
        {
            e++;
        }
    }
    if (o == e)
    {
        return "YES";
    }
    else
        return "NO";
}
int main(int argc, char const *argv[])
{
    int t, n, size;
    cin >> t;
    while (t--)
    {
        cin >> n;
        size = 2 * n;
        int input[size];
        for (int i = 0; i < size; i++)
        {
            cin >> input[i];
        }
        cout << isOdd(input, size) << "\n";
    }

    return 0;
}
