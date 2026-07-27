#include<bits/stdc++.h>
using namespace std;
 
int main(){
 
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        long long a[n];
 
        for(int i = 0;i < n;i++){
            cin>>a[i];
        }
        long long f = 0;
        for(int i=(n-1);i>0;i--){
            if(a[i] == 0){
                f = -1;
                break;
            }
 
            while(a[i-1] >= a[i]){
                a[i-1] /= 2;
                f++;
            }
        }
        cout<<f<<"
";
        continue;
    }
 
    return 0;
}