#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long n,k,q;
        cin>>n>>k>>q;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i] = (a[i] > q) ? 0 : 1;
        }
        
        long long choossing_ski_days = 0;
        long long cnt = 0;
        for(int i=0;i<n;i++){
            if(a[i] == 1){
                cnt++;
            }else{
                if(cnt >= k){
                    long long diff = cnt - k + 1;
                    choossing_ski_days += (diff * (diff+1))/2;
                }
                cnt = 0;
            }
        }
        if(cnt >= k){
            long long diff = cnt - k + 1;
            choossing_ski_days += (diff * (diff+1))/2;
        }
 
        cout<<choossing_ski_days<<endl;
    }
 
    return 0;
}