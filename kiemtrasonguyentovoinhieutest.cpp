#include<bits/stdc++.h>
using namespace std;

int prime(int n){
    if(n<2) return 0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        for(int i=m;i<=n;i++){
            if(prime(i)) cout<<i<<" ";
        }
        cout<<endl;
    }
}