#include <bits/stdc++.h>
using namespace std;
int xor_till(long long n)
{
    int a = n % 4;
    if (a == 0)
        return n;
    else if (a == 1)
        return 1;
    else if (a == 2)
        return n + 1;
    else
        return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        long long XOR = 0;
        XOR = xor_till(a - 1);
        long long cnt = a;
        if (XOR != b)
        {
            if (a == (XOR ^ b))
                cnt++;
            cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}