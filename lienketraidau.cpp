#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++){
        if(i==0 && 1ll*a[i]*a[i+1]<0) cout<<a[i]<<" ";
        else if(i==n-1 && 1ll*a[i]*a[i-1]<0) cout<<a[i]<<" ";
        else if(1ll*a[i]*a[i-1]<0 || 1ll*a[i]*a[i+1]<0 ) cout<<a[i]<<" ";
    }
}