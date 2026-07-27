#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
 
        int c=0;
        vector<int> v;
        for(int i=0;i<n;i++){
            if(a[i] == 0){
                c++;
            }else{
                v.push_back(c);
                c=0;
            }
        }
        v.push_back(c);
 
        cout<<(*max_element(v.begin(),v.end()))<<endl;
    }
 
    return 0;
}