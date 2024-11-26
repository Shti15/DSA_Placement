#include<bits/stdc++.h>
using namespace std;

void print_extracted_digits(int n){
    while(n>0){
        cout<<n%10;
        n=n/10;
    }
}

int main(){
    int n;
    cin>>n;
    print_extracted_digits(n);
}