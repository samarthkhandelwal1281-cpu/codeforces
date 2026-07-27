#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long a[n];
        for(long long i=0;i<n;i++)
            cin>>a[i];
        
        long long mini = 0,maxi = 0;
        for(long long i=0;i<n;i++){
            maxi += a[i]/x;
            if(a[i]%x > 0)
                maxi++;
        }
        long long sum = 0;
        for(long long i=0;i<n;i++){
            sum += a[i];
        }
        mini = sum / x;
        if(sum%x > 0)
            mini++;
        cout<<mini<<" "<<maxi<<endl;
    }
 
    return 0;
}