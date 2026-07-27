#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long n;
        cin>>n;
        char s[n];
        cin>>s;
 
        unordered_set<char> st;
        vector<long long> prefix(n + 1);
        vector<long long> suffix(n + 1);
 
        for(int i = 1;i<=n;i++){
            st.insert(s[i-1]);
            prefix[i] = st.size();
        }
        st.clear();
        for(int i = n;i>=1;i--){
            st.insert(s[i-1]);
            suffix[i] = st.size();
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans, prefix[i] + suffix[i+1]);
        }
 
        cout<<ans<<endl;
    }
    return 0;
}