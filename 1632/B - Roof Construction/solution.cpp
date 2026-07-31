#include <bits/stdc++.h>
using namespace std;
// TC :- O(2n)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        n--; // so that it go match with 0
        vector<long long> ans;
 
        long long msb = log2(n);
        long long num = pow(2, msb) - 1;
        while (num >= 0)
        {
            ans.push_back(num);
            num--;
        }
        num = pow(2, msb);
        while (num <= n)
        {
            ans.push_back(num);
            num++;
        }
 
        for (auto i : ans)
            cout << i << " ";
        cout << endl;
    }
 
    return 0;
}