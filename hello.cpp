#include<bits/stdc++.h>
using namespace std;
int main(){
    char arr[50]= "apple";
    int n;cin>>n;
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int i=0,currlen = 0,maxlen = 0, st = 0, maxst = 0;
    while(i<n){
        if(arr[i]==' ' || arr[i] == '\0'){
            if(currlen > maxlen){
                maxst = st;
                maxlen = currlen;
            }
            st = i+1;
            currlen= 0;
        }
        else{
            currlen++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    }
    
    cout<<arr<<endl;
    cout<<maxlen<<endl;

    for(int i = 0;i<maxlen;i++){
        cout<<arr[maxst+i];
        
        }
        cout<<endl;
}
