#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k=0;
        cin>>n;
 
        int h[n];
        for(int i=0;i<n;i++){
            cin>>h[i];
        }
        int m = *max_element(h,h+n);
        for(int i=0;i<n;i++){
            k = max(k,m - h[i]);
        }
        cout<<k+1<<"
";
    }
}