#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        char c;
        cin >> n >> c;
        string s;
        cin >> s;
        s += s;
        n *= 2;
        long long cnt = 0, index = -1;
        if (c != 'g')
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (s[i % n] == 'g')
                {
                    index = i;
                }
                if (s[i] == c)
                {
                    cnt = max(cnt, index - i);
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}