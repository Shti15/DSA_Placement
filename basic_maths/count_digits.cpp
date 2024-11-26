#include<bits/stdc++.h>
using namespace std;

void  count_digits_bruteforce(int n){
    //time complexity: O(log10(N)+1)
    //space complexity:O(1)
    int cnt=0;
    while(n>0){
        cnt++;
        n=n/10;
    }
    cout<<cnt<<endl;
}
void count_digits_optimized(int n){
    //time complexity:O(1) as log10() is mathematical operation and will take only constant time
    //space complexity:O(1) 
    int cnt=0;
    cnt=int(log10(n)+1);
    cout<<cnt;
}

int main(){
    int n;
    cin>>n;
    count_digits_bruteforce(n);
    count_digits_optimized(n);
}