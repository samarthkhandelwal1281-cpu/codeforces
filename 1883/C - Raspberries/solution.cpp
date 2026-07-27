#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        long long cnt = INT_MAX;
        long long track_even = 0;
        for(int i = 0;i<n;i++){
            if(a[i]%2 == 0) track_even++;
            
            if(a[i]%k == 0)
                cnt = 0;
            cnt = min(cnt, k - a[i]%k);
        }
 
        if(k == 4){
            if(track_even < 2)
                cnt = min(cnt, 2 - track_even);
            else
                cnt = 0;
        }
        
        cout<<cnt<<endl;
    }
 
    return 0;
}