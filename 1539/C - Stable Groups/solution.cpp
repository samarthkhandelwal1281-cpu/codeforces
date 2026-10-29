#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    long long n, k, x;
    cin >> n >> k >> x;
 
    // Vector to store the levels of the students
    vector<long long> v(n);
    // Input the levels of the students
    for (int i = 0; i < n; i++) //? O(N)
        cin >> v[i];
 
    // Sort the levels to facilitate grouping
    sort(v.begin(), v.end()); //? O(N log N)
 
    // Vector to store the differences between consecutive levels that are greater than x
    vector<long long> differences;
 
    // Calculate the differences between consecutive levels
    for (int i = 0; i < n - 1; i++)
    {
        // If the difference is greater than x, store it
        if (v[i + 1] - v[i] > x)
        {
            differences.push_back(v[i + 1] - v[i]);
        }
    } //? O(N)
 
    // Sort the differences to process the smallest gaps first
    sort(differences.begin(), differences.end()); //? O(N log N)
 
    // Initial number of groups is the number of gaps + 1
    int ans = differences.size() + 1;
 
    // Try to reduce the number of groups by inviting additional students
    for (auto difference : differences)
    {
        // Calculate the minimum number of students needed to fill the gap
        long long val = (difference / x) + (difference % x != 0) - 1; //! ceil(difference / x) - 1
 
        // If we have enough students to fill the gap, reduce the number of groups
        if (k >= val)
        {
            ans--;
            k -= val;
        }
    }
 
    // Output the minimum number of stable groups
    cout << ans << "
";
}
 
//! Total Time Complexity (TC): O(N log N)
//! Total Space Complexity (SC): O(N)