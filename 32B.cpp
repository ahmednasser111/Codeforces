#include <iostream>
#include <string.h>
using namespace std;
int main(int argc, char const *argv[])
{
    string input;
    cin >> input;
    int len = input.length();
    char ans[len];
    int c = 0;
    for (int i = 0; i < len; i++)
    {
        if (input[i] == '-')
        {
            if (input[i + 1] == '-')
            {
                ans[c] = '2';
                i++;
                c++;
            }
            else
            {
                ans[c] = '1';
                i++;
                c++;
            }
        }
        else
        {
            ans[c] = '0';
            c++;
        }
    }
    for (int i = 0; i < c; i++)
    {
        cout << ans[i];
    }
    return 0;
}