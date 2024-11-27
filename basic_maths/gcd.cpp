#include<bits/stdc++.h>
using namespace std;

// optimal approach:euclidian approach
void findgcd_optimalapproach(int n1,int n2){
    //time complexity:O(log phi(min(n1,n2)))
    while(n1>0 && n2>0){
       if(n1>n2){
         n1=n1%n2;
       }
        else{
            n2=n2%n1;
       }
    }
    if(n1==0)
            cout<<n2;
        else
            cout<<n1;
}

//better approach:
void findgcd_betterapproach(int n1,int n2){
    //time complexity:O(min(N1,N2))
    //space complexity:O(1)
    int gcd=1;
    for(int i=min(n1,n2);i>0;i--){
        if(n1%i==0 && n2%i==0){
            gcd=i;
            break;
        }
    }
    cout<<gcd<<endl;
}
void findgcd_bruteforce(int n1,int n2){
    //time complexity:O(min(n1,n2))
    int gcd=1;
    for(int i=1;i<=min(n1,n2);i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<gcd<<endl;
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    findgcd_bruteforce(n1,n2);
    findgcd_betterapproach(n1,n2);
    findgcd_optimalapproach(n1,n2);

}