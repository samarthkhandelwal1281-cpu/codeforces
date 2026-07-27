#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int T;
    cin>>T;
    while(T--){
        string s;
        cin>>s;
        long long n = s.size();
        int lengthoft = 0;
        int cntzero = 0,cntone = 0;
 
        for(int i=0;i<n;i++){
            if(s[i] == '1')
                cntone++;
            else
                cntzero++;
        }
 
        for(int i=0;i<n;i++){
            if(s[i] == '0' && cntone>0){
                cntone--;
                lengthoft++;
            }
            else if(s[i] == '1' && cntzero > 0){
                cntzero--;
                lengthoft++;
            }
            else
                break;
        }
 
        cout<<(n - lengthoft)<<endl;
    }
 
    return 0;
}