//INCOMPLETE
#include<bits/stdc++.h>
using namespace std;
 
int checkRound(long long n){
    long long cnt_zero,cnt_digits;
    cnt_zero = cnt_digits = 0;
    while(n){
        if(n%10==0){
            cnt_zero++;
        }
        cnt_digits++;
        n /= 10;
    }
 
    return cnt_zero == cnt_digits-1;
}
 
int main(){
    long long t;
    cin>>t;
    vector<long long> c;
    for(int i=1;i<=999999;i++){
        if(checkRound(i))
            c.push_back(i);
    }
 
    while(t--){
        long long n;
        cin>>n;
        int check=0;
        for(int i=0;i<c.size();i++){
            if(c[i] <= n)
                check++;
        }
        
 
        cout<<check<<endl;
    }
}