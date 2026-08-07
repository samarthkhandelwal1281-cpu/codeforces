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
        int flag = 1;
        for (int i = n; i >= 2; i--)
        {
            if ((n + 1) % i == 0)
            {
                flag = 0;
                break;
            }
        }
 
        if (flag == 0)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
 
    return 0;
}