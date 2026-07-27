#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
 
        int a[n];
        map<int ,int> m;
        for(int i=0;i<n;i++)
            cin>>a[i];
        for(int i=0;i<n;i++)
            m[a[i]]++;
 
        for(int i=0;i<n;i++){
            auto it = m.find(a[i]);
            if(m[a[i]] == 1)
                cout<<i+1<<endl;
        }
    }
 
    return 0;
}