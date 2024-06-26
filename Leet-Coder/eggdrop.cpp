#include <iostream>
#include <limits.h>
using namespace std;
int eggdrop(int n, int k)
{
    if (k == 1 || k == 0)
    {
        return k;
    }
    if (n == 1)
    {
        return k;
    }
    int min = INT_MAX, x, res;
    for (x = 1; x <= k; x++)
    {
        res = max(eggdrop(n - 1, x - 1), eggdrop(n, k - x));
        if (res < min)
        {
            min = res;
        }
    }
    return min + 1;
}
int main()
{
    int n, k;
    cin >> n >> k;
    int r = eggdrop(n, k);
    cout << r;
}