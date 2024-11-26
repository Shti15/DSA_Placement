#include<bits/stdc++.h>
using namespace std;

void print_divisors_optimal(int n){
    //time complexity:O(sqrt(N)+dlogd+d)
    //space complexity:O(2.sqrt(N))
    vector<int> divisors;
    //O(sqrt(n))
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
             divisors.push_back(i);
            if(n/i != i){
                divisors.push_back(n/i);
            }
        }
    }
    //O(dlogd) where n are factors
    sort(divisors.begin(),divisors.end());
    //O(d) n are factors
    for( int i=0;i<divisors.size();i++){
            cout<<divisors[i]<<" ";
    }
}
void print_divisors_bruteforce(int n){
    // time complexity:O(N)
    // space complexity:O(1)
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cout<<i<<" ";
    }
    cout<<endl;


}

int main(){
    int n;
    cin>>n;
    print_divisors_bruteforce(n);
    print_divisors_optimal(n);
}