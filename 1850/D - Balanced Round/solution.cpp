#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<long long> difficulty(n);
        for(int i=0;i<n;i++)
            cin>>difficulty[i];
 
        int cnt=1;
        int largest = 1;
        sort(difficulty.begin(),difficulty.end());
 
        for(int i=1;i<n;i++){
            if(difficulty[i] - difficulty[i-1] <= k)
                cnt++;
            else
                cnt=1;
            //larget sequence length
            largest = max(largest,cnt);
        }
 
        cout<<(n-largest)<<endl;
    }
}