#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0, cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == ')')
                cnt++;
            else
                cnt--;
            ans = max(ans, cnt);
        }
        cout << ans << endl;
    }
 
    return 0;
}