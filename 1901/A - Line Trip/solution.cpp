#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,x;
        int gaps=0;
        cin>>n>>x;
        int arr[n+1];
        //input
        arr[0] = 0;
        for(int i=1;i<n+1;i++)
            cin>>arr[i];
        //count the gaps between gas stations
        for(int i=0;i<(n);i++){
            if(arr[i+1] - arr[i] > gaps)
                gaps = arr[i+1] - arr[i];
        }
        if(2*(x-arr[n]) > gaps)
            gaps = 2*(x-arr[n]);
        cout<<gaps<<endl;
    }
 
    return 0;
}