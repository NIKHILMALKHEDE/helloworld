#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    bool ch[n];
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }
    for(int i = 0;i<n;i++){
       ch[i] = false;
    }
    for(int i = 0;i<n;i++){
        if(a[i]>=0){
            ch[a[i]] = true;
        }
    }
    int ans = -1;
    for(int i = 0;i<n;i++){
        if(ch[i] == false){
            ans = i;
            break;
        }
    }
    cout<<ans<<endl;
}
