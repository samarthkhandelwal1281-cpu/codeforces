#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int n;
        cin>>n;
        int m=0;
 
        while(1){
            //vanya's turn
            if(n%3 == 1)
                n--;
            else if(n%3 == 2)
                n++;
            else
                n++;
            m++;
 
            if(n%3==0){
                cout<<"First"<<endl;
                break;
            }
            else if(m==10){
                cout<<"Second"<<endl;
                break;
            }
 
            //vova's turn
            if(n%3 == 1)
                n--;
            else if(n%3 == 2)
                n++;
        }
        
    }
    return 0;
}