/*Cho số tự nhiên N. Nhiệm vụ 
của bạn là hãy đếm tất cả các số có đúng ba ước số. Ví dụ n=100, ta có các số 4.
Input Format
Số nguyên dương N
Constraints
1≤N ≤10^12.
Output Format
Đưa ra kết quả bài toán
Sample Input 0
838000000000
Sample Output 0
72397
*/
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
    long long n;
    cin>>n;
    int cnt=0;
    for(int i=2;i<=sqrt(n);i++){
        if(prime(i)) ++cnt;
    }
    cout<<cnt;
}