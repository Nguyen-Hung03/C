/*Năm mới sắp đến và bạn rất hào hứng muốn biết còn lại bao nhiêu phút trước Tết. Bạn biết rằng hiện tại 
đồng hồ hiển thị h giờ và m phút, trong đó 0<=hh<24 và 0<=mm<60. Chúng tôi sử 
dụng định dạng thời gian 24 giờ! Nhiệm vụ của bạn là tìm số phút trước Tết. 
Bạn biết răng năm mới đến khi đồng hồ hiển thị 0 giờ và 0 phút.
Input Format
2 số nguyên không âm h và m
Constraints
0<=h<24; 0<=m<60;
Output Format
In ra đáp án của bài toán
Sample Input 0
23 0
Sample Output 0
60
*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int h,m;
    cin>>h>>m;
    cout<<(23-h)*60+60-m;
}