#include <bits/stdc++.h>
 
using namespace std;
 
// Function to calculate the Least Common Multiple (LCM) of two numbers
long long lcm(long long num1, long long num2)
{
    // LCM is calculated using the formula: (a * b) / gcd(a, b)
    return (num1 * num2) / (gcd(num1, num2));
    // Time Complexity: O(log(min(a, b))) -> O(log(N))
}
 
// Function to calculate the sum of integers from 'start' to 'end'
long long calculateSum(long long start, long long end)
{
    // Sum of an arithmetic series formula: ((start + end) * (end - start + 1)) / 2
    long long sum = ((start + end) * (end - start + 1)) / 2;
    // Time Complexity: O(1)
    return sum;
}
 
int main()
{
    int t; // Number of test cases
    cin >> t;
 
    while (t--)
    {
        long long n, x, y; // Variables for each test case
        cin >> n >> x >> y;
 
        // Calculate the count of numbers divisible by x but not by lcm(x, y)
        long long count1 = (n / x) - (n / lcm(x, y)); // Time Complexity: O(log N)
        // Calculate the count of numbers divisible by y but not by lcm(x, y)
        long long count2 = (n / y) - (n / lcm(x, y)); // Time Complexity: O(log N)
 
        // Calculate the maximum score using the derived counts
        long long ans = calculateSum(n - count1 + 1, n) - calculateSum(1LL, count2); // Time Complexity: O(1)
 
        // Output the result for the current test case
        cout << ans << endl;
    }
}
 
// Total Time Complexity (TC): O(t * (log N))
// Space Complexity (SC): O(t)