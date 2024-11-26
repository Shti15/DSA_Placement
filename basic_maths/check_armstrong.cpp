#include<bits/stdc++.h>
using namespace std;

int count_digit(int n){
    return int(log10(n)+1);
}
void check_armstrong(int n){
    //time complexity:O(log10N + 1)
    //space complexity:O(1)
    int no_of_digits=count_digit(n);
    int sum=0;
    int cpy_n=n;
    while(n>0){
        sum+=pow(n%10,no_of_digits);
        n=n/10;

    }
    if(sum==cpy_n)
        cout<<"true";
    else
        cout<<"false";
}
int main(){
    int n;
    cin>>n;
    check_armstrong(n);
}