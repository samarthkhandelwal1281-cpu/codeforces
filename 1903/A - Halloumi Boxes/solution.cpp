#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n,k,result = 0;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<(n-1);i++){
            if(arr[i] <= arr[i+1])
                result = 1;
        }
        if(is_sorted(arr,arr+n) || k > 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
 
    }
    return 0;
}