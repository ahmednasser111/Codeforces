// Ultra-Fast Mathematician.
#include <bits\stdc++.h>
using namespace std;
string xoring(string num1, string num2, int len)
{
    string ans = "";
    for (int i = 0; i < len; i++)
    {
        if (num1[i] == num2[i])
        {
            ans += "0";
        }
        else
            ans += "1";
    }
    return ans;
}
int main(int argc, char const *argv[])
{
    string num1, num2;
    cin >> num1;
    cin >> num2;
    int len = num1.length();
    cout << xoring(num1, num2, len);

    return 0;
}
