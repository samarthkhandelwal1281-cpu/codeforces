#include <bits/stdc++.h>
 
using namespace std;
 
// Function to perform binary search on the prefix maximum array
// Returns the largest index for which pmax[index] <= val
int binSearch(vector<long long> &pmax, int n, int val)
{
    int low = 0, high = n - 1;
    int ans = -1; // Initialize answer to -1
 
    // Binary search loop
    while (low <= high)
    {
        int mid = (low + high) / 2; // Calculate mid index
 
        // Check if the current mid value is less than or equal to val
        if (pmax[mid] <= val)
        {
            ans = mid;     // Update answer
            low = mid + 1; // Move to the right half
        }
        else
        {
            high = mid - 1; // Move to the left half
        }
    }
 
    return ans; // Return the largest index found
} // Time Complexity: O(log N)
 
int main()
{
    int t;
    cin >> t;
 
    while (t--)
    {
        int n, q;
        cin >> n >> q;
 
        vector<long long> steps(n), query(q);
 
        for (int i = 0; i < n; i++)
            cin >> steps[i];
        for (int i = 0; i < q; i++)
            cin >> query[i];
        vector<long long> pmax(n), psum(n);
        pmax[0] = steps[0];
        psum[0] = steps[0];
        for (int i = 1; i < n; i++)
        {
            pmax[i] = max(pmax[i - 1], steps[i]);
            psum[i] = psum[i - 1] + steps[i];
        }
        for (int i = 0; i < q; i++)
        {
            int val = query[i];
            int ind = binSearch(pmax, n, val);
            if (ind == -1)
                cout << "0 ";
            else
                cout << psum[ind] << " ";
        }
        cout << "
";
    }
 
    return 0;
}