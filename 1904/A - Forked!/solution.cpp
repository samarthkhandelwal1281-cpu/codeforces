#include<bits/stdc++.h>
using namespace std;
 
int dx[4] = {-1,1,-1,1}, dy[4] = {-1,-1,1,1};
int main(){
    int t;
    cin>>t;
 
    while(t--){
        long long a,b;
        cin>>a>>b;
 
        long long xk,yk;
        cin>>xk>>yk;
 
        long long xq,yq;
        cin>>xq>>yq;
 
        set<pair<int,int>> king_hits, queen_hits;
 
        int c=0;
        for(int j=0;j < 4;j++){
            king_hits.insert({xk + dx[j] * a, yk + dy[j] * b});
            king_hits.insert({xk + dx[j] * b, yk + dy[j] * a});
 
            queen_hits.insert({xq + dx[j] * a, yq + dy[j] * b});
            queen_hits.insert({xq + dx[j] * b, yq + dy[j] * a});
        }
 
        for(auto position : king_hits){
            if(queen_hits.find(position) != queen_hits.end()){
                c++;
            }
        }
        
        cout<<c<<endl;
    }
 
    return 0;
}