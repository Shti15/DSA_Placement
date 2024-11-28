#include<bits/stdc++.h>
using namespace std;

int fibonacci_series(int n){
    //time compleity: O(2^n) this is becoz for each we need 2 pairs down
    //like f(4)=>f(3),f(2) 
    //f(3)=>f(2),f(1)
    //f(2)=>f(1),f(0)
    //therefor not exactly 2^n but almost .. therefor we say exponential time complexity
    if(n<=1){
        return n;
    }
    //this is multiple recursion
    int last=fibonacci_series(n-1);
    int slast=fibonacci_series(n-2);
    return last+slast;

}
int main(){
    int n;
    cin>>n;
    cout<<fibonacci_series(n);

}