#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    for (int j = 1; j <= 60; j++)
    {
        long long z = 1LL << j; // used bit manipulation
        set<long long> st;
        for (int i = 0; i < n; i++)
            st.insert(a[i] % z);
 
        if (st.size() == 2)
        {
            cout << z << endl;
            return;
        }
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}