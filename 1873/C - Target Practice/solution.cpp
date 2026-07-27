#include<bits/stdc++.h>
using namespace std;
int minimum(int i,int j, int n){
    int min = n;
    if(min > i)
        min = i;
    if(min > (2*n - 1 - i))
        min = (2*n - 1 - i);
    if(min > j)
        min = j;
    if(min > (2*n - 1 - j))
        min = (2*n - 1 - j);
    return (min+1);
}
 
int main(){
    int t;
    int M = 10;
    cin>>t;
 
    while(t--){
        char a[M][M];
        int sum = 0;
 
        for(int i=0;i<M;i++)
            for(int j=0;j<M;j++)
                cin>>a[i][j];
 
        int score[M][M];
        int n=M/2;
        
        for(int i=0;i<M;i++)
            for(int j=0;j<M;j++)
                score[i][j] = minimum(i,j,n);
 
        for(int i=0;i<M;i++)
            for(int j=0;j<M;j++)
                if(a[i][j] == 'X')
                    sum += score[i][j];
 
        cout<<sum<<endl;
    }
}