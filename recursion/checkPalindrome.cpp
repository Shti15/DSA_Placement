#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int i,string str,int n){
    if(i>=n/2){
        return true;
    }
    if(str[i]!=str[n-i-1]){
        return false;
    }
    return checkPalindrome(i+1,str,n);

}


int main(){
    string str;
    cin>>str;
    if(checkPalindrome(0,str,str.length())){
        cout<<"is palindrome";
    }
    else{
        cout<<"not a palindrome";
    }

}