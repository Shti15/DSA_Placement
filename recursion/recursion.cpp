#include<bits/stdc++.h>
using namespace std;

void printname(int cnt,int n){
    //base condition
    if(cnt>n)
        return;
    cout<<"shreya"<<endl;
    cnt++;
    printname(cnt,n);
}
void print1toN(int cnt,int n){
    //base condn
    if(cnt>n)
        return;
    cout<<cnt<<endl;
    cnt++;
    print1toN(cnt,n);
}
void printNto1(int cnt,int n){
    //base condn
    if(cnt<1)
     return;
    cout<<cnt<<endl;
    cnt--;
    printNto1(cnt,n);

}
void print1toN_backtrack(int cnt,int n){
        if(cnt<1)
        return;
        print1toN_backtrack(cnt-1,n);
        cout<<cnt<<endl;
}
void printNto1_backtrack(int cnt,int n){
        if(cnt>n) 
            return;
        printNto1_backtrack(cnt+1,n);
        cout<<cnt<<endl;
}

//parematerized way
void sum1toN_parameterised(int cnt,int sum){
    if(cnt<1){
        cout<<sum;
        return;
    }
    sum1toN_parameterised(cnt-1,sum+cnt);
        
}
//functional way
//imp: smallest task/base task return something & the function will do something and rest will be given to recursion
int sum1toN_functional(int cnt){
    // smallest condition return
    if(cnt==1)
        return 1;
    return cnt+sum1toN_functional(cnt-1);

}

int factorial(int n){
    if(n==1)
        return 1;
    return n*factorial(n-1);
    
}

int main(){
    int n;
    cin>>n;
    // printname(1,n);
    // print1toN(1,n);
    // printNto1(n,n);
    // print1toN_backtrack(n,n);
    // printNto1_backtrack(1,n);
    // 
    cout<<factorial(n);

}