#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int min = *max_element(a.begin(),a.end());
        for(int i=0;i<n-1;i++){
            if((a[i+1] - a[i]) < min)
                min = a[i+1] - a[i];
        }
 
        if(min < 0)
            cout<<0<<endl;
        else{
            min = min/2;
            cout<<min+1<<endl;
        }
    }
}