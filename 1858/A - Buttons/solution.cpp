#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
 
        long long sum = a + b + c;
        bool result = true;
        if (c % 2 == 1) // odd
        {
            // If c is odd, the player with more exclusive buttons will win
            if (b > a) // Katie has more exclusive buttons
                cout << "Second" << endl; // Katie wins
            else
                cout << "First" << endl; // Anna wins
        }
        else // even
        {
            // If c is even, the player with more exclusive buttons will win
            if (a > b) // Anna has more exclusive buttons
                cout << "First" << endl; // Anna wins
            else
                cout << "Second" << endl; // Katie wins
        }
    }
    return 0;
}