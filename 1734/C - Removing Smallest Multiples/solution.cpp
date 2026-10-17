#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long cost = 0;
        vector<bool> isremoved(n + 1, false);
 
        for (int i = 1; i <= n; i++)
        {
            for (int j = i; j <= n; j += i)
            {
                if (s[j - 1] == '1')
                    break;
                if (isremoved[j])
                    continue;
                else
                {
                    isremoved[j] = true;
                    cost += i;
                }
            }
        }
 
        cout << cost << endl;
    }
    return 0;
}