#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long n,ans=0;
        cin>>n;
 
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(a[i], a[j]) <= 2)
                    ans=1;
            }
        }
        cout<<(ans ? "YES" : "NO" )<<endl;
    }
 
    return 0;
}