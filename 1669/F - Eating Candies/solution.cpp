#include <bits/stdc++.h>
using namespace std;
 
void solve()
{
    int n;
    cin >> n;
    vector<int> w(n);
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
 
    int l = 0, r = n - 1;
    int aliceeats = 0, bobeats = 0;
    int maxi = 0;
 
    while (l <= r)
    {
        if (aliceeats < bobeats)
        {
            aliceeats += w[l++];
        }
        else if (bobeats < aliceeats)
        {
            bobeats += w[r--];
        }
        else
        { // aliceeats == bobeats
            // Record total candies eaten so far
            maxi = l + (n - 1 - r);
            // Move one pointer to continue searching for a longer valid prefix/suffix
            aliceeats += w[l++];
        }
    }
 
    // Check one final time after loop termination
    if (aliceeats == bobeats)
    {
        maxi = l + (n - 1 - r);
    }
 
    cout << maxi << "
";
}
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
 
    return 0;
}