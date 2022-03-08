#include <iostream>
using namespace std;

void t(int arr[4])
{
    int ans[3];
    int max = arr[0];
    int maxindex = 0;
    int c = 0;
    for (int i = 1; i < 4; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            maxindex = i;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (i == maxindex)
        {
            continue;
        }
        else
        {
            ans[c] = max - arr[i];
            c++;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        cout << ans[i] << " ";
    }
}
int main(int argc, char const *argv[])
{
    int in[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> in[i];
    }
    t(in);

    return 0;
}
