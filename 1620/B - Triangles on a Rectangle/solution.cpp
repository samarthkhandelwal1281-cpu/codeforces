#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long w, h;
        cin >> w >> h;
        long long k;
        cin >> k;
        vector<long long> horizontal0(k);
        for (long long i = 0; i < k; i++)
            cin >> horizontal0[i];
        cin >> k;
        vector<long long> horizontalH(k);
        for (int i = 0; i < k; i++)
            cin >> horizontalH[i];
        cin >> k;
        vector<long long> vertical0(k);
        for (int i = 0; i < k; i++)
            cin >> vertical0[i];
        cin >> k;
        vector<long long> verticalW(k);
        for (int i = 0; i < k; i++)
            cin >> verticalW[i];
 
        long long base, height, ans = 0;
        base = horizontal0[horizontal0.size() - 1] - horizontal0[0];
        ans = base * h;
        base = horizontalH[horizontalH.size() - 1] - horizontalH[0];
        ans = max(ans, base * h);
 
        height = vertical0[vertical0.size() - 1] - vertical0[0];
        ans = max(ans, height * w);
        height = verticalW[verticalW.size() - 1] - verticalW[0];
        ans = max(ans, height * w);
 
        cout << ans << "
";
    }
 
    return 0;
}