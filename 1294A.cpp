#include <iostream>
using namespace std;
string coins(int arr[], int tar)
{
    int max = arr[0], min = arr[0], mid = arr[0], maxindex = 0, minindex = 0;
    if (arr[0] != arr[1] || arr[0] != arr[2])
    {
        for (int i = 1; i < 3; i++)
        {
            if (max < arr[i])
            {
                max = arr[i];
                maxindex = i;
            }
            if (min > arr[i])
            {
                min = arr[i];
                minindex = i;
            }
        }
        for (int i = 1; i < 3; i++)
        {
            if (i != maxindex && i != minindex)
            {
                mid = arr[i];
                break;
            }
        }
        int dif = max - min;
        int dif1 = max - mid;
        while (max != min)
        {
            if (tar - dif >= 0)
            {
                min += dif;
                tar = tar - dif;
            }
            else
                return "NO";
        }
        while (max != mid)
        {
            if (tar - dif1 >= 0)
            {
                mid += dif1;
                tar -= dif1;
            }
            else
                return "NO";
        }
        if (max == min && max == mid)
        {
            if (tar % 3 == 0 || tar == 0)
            {
                return "YES";
            }
            else
                return "NO";
        }
    }
    else
    {
        if (tar % 3 == 0)
        {
            return "YES";
        }
        else
            return "NO";
    }
    return "YES";
}
int main(int argc, char const *argv[])
{
    int tar = 0;
    int t;
    cin >> t;
    string ans[t];
    int in[4];
    for (int j = 0; j < t; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> in[i];
        }
        cin >> tar;
        ans[j] = coins(in, tar);
    }
    for (int i = 0; i < t; i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}
