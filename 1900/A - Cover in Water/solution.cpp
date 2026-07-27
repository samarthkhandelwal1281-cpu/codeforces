#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        // s
        int n;
        int action1 = 0;
        int flag=0;
        cin>>n;
        char s[n];
        //'.' if empty and '#' if blocked
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        for(int i=0;i<n;i++){
            if(s[i] == '.'){
                action1++;
                flag++;
                if(flag==3){
                    action1 = 2;
                    break;
                }
            }else{
                flag=0;
            }
        }
        cout<<action1<<endl;
    }
    return 0;
}