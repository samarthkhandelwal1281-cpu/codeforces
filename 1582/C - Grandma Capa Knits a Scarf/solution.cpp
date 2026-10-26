#include <bits/stdc++.h>
using namespace std;
// didnt understand properly but yup gret question
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
        int ans = INT_MAX;
 
        for (char c = 'a'; c <= 'z'; c++)
        {
            int tmp = 0;        // Minimum number of characters to delete if we only delete character 'c'
            bool isPoss = true; // Flag to check if it's possible to make the string a palindrome
 
            int i = 0, j = n - 1; // Two pointers, one starting from the beginning and one from the end
 
            while (i < j)
            {
                if (s[i] == s[j])
                {
                    i++;
                    j--;
                    continue;
                }
 
                if (s[i] == c)
                {
                    tmp++; // Increment the count of deletions
                    i++;   // Move the left pointer to the right
                }
                else if (s[j] == c)
                {
                    tmp++; // Increment the count of deletions
                    j--;   // Move the right pointer to the left
                }
                else
                {
                    isPoss = false; // It's not possible to make the string a palindrome
                    break;          // Exit the loop
                }
            } //? O(N)
 
            if (!isPoss)
                tmp = INT_MAX; // If not possible, set tmp to maximum integer value
 
            ans = min(ans, tmp); // Update the answer with the minimum deletions found
        }
 
        if (ans == INT_MAX)
            ans = -1;
        cout << ans << "
";
    }
    return 0;
}