#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long ans = 0, k = 0;
        if(a != b){
            ans = abs(a-b);
            k = min(b%ans,ans - b%ans);
        }
        
        cout<<ans<<" "<<k<<endl;
    }
 
    return 0;
}