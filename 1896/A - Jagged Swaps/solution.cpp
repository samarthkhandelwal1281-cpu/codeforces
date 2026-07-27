#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,ans=1;        
        cin>>n;
 
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        if(a[0] == 1)
            ans = 1;
        else
            ans=0;
        for(int i=0;i<n;i++)
            if(a[i] > n)
                ans=0;
        cout<<(ans ? "YES" : "NO")<<endl;
    }
    return 0;
}