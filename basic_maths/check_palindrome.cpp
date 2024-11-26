#include<bits/stdc++.h>
using namespace std;


void check_palindrome(int n){
    //time complexity:O(log10(N)+1)
    //space complexity:O(1)
    int cpy_n=n;
    int rev_num=0;
    while(n>0){
        rev_num=(rev_num)*10+n%10;
        n=n/10;
    }
    if(rev_num==cpy_n)
        cout<<"true";
    else
        cout<<"false";
}
int main(){
    int n;
    cin>>n;
    check_palindrome(n);
}