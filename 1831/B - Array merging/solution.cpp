#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            cin>>b[i];
        
        vector<long long> longest_a(2*n + 1);
        vector<long long> longest_b(2*n + 1);
 
        long long cnt = 1;
        for(int i = 1;i < n;i++){
            if(a[i-1] == a[i]){
                cnt++;
            }else{
                longest_a[a[i-1]] = max(longest_a[a[i-1]], cnt);
                cnt = 1;
            }
        }
        longest_a[a[n-1]] = max(longest_a[a[n-1]], cnt);
 
        cnt = 1;
        for(int i = 1;i < n;i++){
            if(b[i-1] == b[i]){
                cnt++;
            }else{
                longest_b[b[i-1]] = max(longest_b[b[i-1]], cnt);
                cnt = 1;
            }
        }
        longest_b[b[n-1]] = max(longest_b[b[n-1]], cnt);
 
        
        long long longest = -1;
        for(int i=1;i<=(2*n);i++){
            longest = max(longest, longest_a[i] + longest_b[i]);
        }
        cout<<longest<<"
";
    }
 
    return 0;
}