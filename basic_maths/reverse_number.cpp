#include<bits/stdc++.h>
using namespace std;


void reverse_number(int n){
    //time complexity:O(log10(N)+1)
    //space complexity:O(1)
    int rev_num=0;
    while(n>0){
        rev_num=(rev_num)*10+n%10;
        n=n/10;
    }
    cout<<rev_num;
}
int main(){
    int n;
    cin>>n;
    reverse_number(n);
}