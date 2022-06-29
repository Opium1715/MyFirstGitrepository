#include <iostream>
using namespace std;
int main(void)
{
    int n, sum = 0;
    int S[19] = { 0 };
    int temp[19] = { 0 };
    cin >> n;
    S[1] = 1;
    sum = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i - j + 1 >= i - 1)
            {
                temp[j] = sum;
            }
            else
            {
                int tnum = sum;
                for (int k = 1; k <= j - 2; k++)
                {
                    tnum -= S[k];
                }
                temp[j] = tnum;
            }
        }
        sum = 0;
        for (int j = 1; j <= i; j++)
        {
            S[j] = temp[j];
            sum += temp[j];
        }
    }
    cout << sum << endl;
    return 0;
}