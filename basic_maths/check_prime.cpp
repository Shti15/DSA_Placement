#include<bits/stdc++.h>
using namespace std;

void check_prime_optimal(int n){
    //time complexity:O(sqrt(N))
    //space complexity:O(1)

    int cnt=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cnt++;
            if(n/i != 0){
                cnt++;
            }
        }
    }
    if(cnt==2)
        cout<<"prime";
    else
        cout<<"not prime";
}
void check_prime_bruteforce(int n){
    // time complexity:O(N)
    // space complexity:O(1)
    int cnt=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cnt++;
        }
    }
    if(cnt==2)
        cout<<"prime";
    else
        cout<<"not prime";
    cout<<endl;


}

int main(){
    int n;
    cin>>n;
    check_prime_bruteforce(n);
    check_prime_optimal(n);
}