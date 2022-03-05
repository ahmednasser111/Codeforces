#include <iostream>
#include <array>
using namespace std;
int isDiv(int num)
{
    int temp = 0;
    if (num % 7 == 0)
    {
        return num;
    }
    else
    {
        while (num % 7 != 0)
        {
            num /= 10;
            num *= 10;
            temp = num;
            for (int i = 1; i <= 9; i++)
            {
                num += i;
                if (num % 7 == 0)
                {
                    break;
                }
                else
                    num = temp;
            }
        }
        return num;
    }
}

int main()
{
    int num;
    int iter;
    cin >> iter;
    int sol[iter];

    for (int i = 0; i < iter; i++)
    {
        cin >> num;
        sol[i] = isDiv(num);
    }
    for (int i = 0; i < iter; i++)
    {
        cout << sol[i] << "\n";
    }

    return 0;
}
