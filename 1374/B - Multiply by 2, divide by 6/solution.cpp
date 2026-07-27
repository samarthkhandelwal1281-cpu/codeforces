#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        int k = 0;
        int ans = 1;
        while(n != 1){
            if(n%6 == 0){
                n /= 6;
                k++;
            }else if(n%6 == 3){
                n *= 2;
                k++;
            }else{
                ans = 0;
                break;
            }
        }
        if(ans == 0)
            cout<<"-1
";
        else 
            cout<<k<<endl;
    }
 
    return 0;
}