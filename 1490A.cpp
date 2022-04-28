#include <iostream>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    int t, length, count = 0;
    cin >> t;
    while (t--)
    {
        cin >> length;
        int input[length];
        for (int i = 0; i < length; i++)
            cin >> input[i];
        count = 0;
        for (int i = 0; i < length - 1; i++)
        {
            double Max = max(input[i], input[i + 1]);
            double Min = min(input[i], input[i + 1]);
            if (Min < Max / 32)
                count += 5;
            else if (Min < Max / 16)
                count += 4;
            else if (Min < Max / 8)
                count += 3;
            else if (Min < Max / 4)
                count += 2;
            else if (Min < Max / 2)
                count++;
        }
        cout << count << "\n";
    }
    return 0;
}
