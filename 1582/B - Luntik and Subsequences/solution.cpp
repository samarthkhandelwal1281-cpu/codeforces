#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        long long sum = 0;
        for(int i=0;i<n;i++)
            sum += a[i];
        
        int cntone = 0;
        for(int i=0;i<n;i++)
            if(a[i] == 1)
                cntone++;
            
        int cntzero = 0;
        for(int i=0;i<n;i++)
            if(a[i] == 0)
                cntzero++;
        
        long long ans = cntone * pow(2,cntzero);
        cout<<ans<<endl;
    }
    return 0;
}