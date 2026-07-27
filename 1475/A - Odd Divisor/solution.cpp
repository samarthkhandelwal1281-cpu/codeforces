#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
 
        int ans = 0;
        while(n > 1){
            if(n%2 == 1){
                ans = 1;
                break;
            }
            n /= 2;
        }
        if(ans > 0)
            cout<<"YES
";
        else
            cout<<"NO
";
    }
}