#include <iostream>
#include <cstdlib>

using namespace std;
int main(int argc, char const *argv[])
{
    int t, len_letter, len_keyboard = 26, index1, index2, sum;
    cin >> t;
    int ans[t];
    string keyboard, letter;
    for (int i = 0; i < t; i++)
    {
        sum = 0;
        index1 = 0;
        index2 = 0;
        cin >> keyboard;
        cin >> letter;
        len_letter = letter.length();
        for (int j = 1; j < len_letter; j++)
        {
            for (int k = 0; k < len_keyboard; k++)
            {
                if (letter[j] == keyboard[k])
                {
                    index1 = k + 1;
                    break;
                }
            }
            for (int k = 0; k < len_keyboard; k++)
            {
                if (letter[j - 1] == keyboard[k])
                {
                    index2 = k + 1;
                    break;
                }
            }
            sum += abs(index1 - index2);
        }
        ans[i] = sum;
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
