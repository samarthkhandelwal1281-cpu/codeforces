#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string daisy,dan;
        cin>>daisy>>dan;
 
        int n = daisy.size();
        int m = dan.size();
        vector<int> frequencyint(26,0);
 
        for(int i=0;i<m;i++){
            frequencyint[dan[i] - 'A']++;
        }
 
        for(int i=(n-1);i>=0;i--){
            if(frequencyint[daisy[i] - 'A'] > 0){
                frequencyint[daisy[i] - 'A']--;
            }else{
                daisy[i] = '.';
            }
        }
 
        string final = "";
        for(int i=0;i<n;i++){
            if(daisy[i] != '.'){
                final += daisy[i];
            }
        }
 
        if(final == dan){
            cout<<"YES
";
        }else{
            cout<<"NO
";
        }
    }
 
    return 0;
}