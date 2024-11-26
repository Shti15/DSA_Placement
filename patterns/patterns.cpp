#include<bits/stdc++.h>
using namespace std;

// *****
// *****
// *****
// *****
// *****


void printpattern1(int n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
}

// *
// **
// ***
// ****
// *****

void printpattern2(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// 1
// 12
// 123
// 1234
// 12345

void printpattern3(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

// 1
// 22
// 333
// 4444
// 55555

void printpattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
}

// *****
// ****
// ***
// **
// *

void printpattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

// 12345
// 1234
// 123
// 12
// 1

void printpattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i+1;j++){
            cout<<j;
        }
        cout<<endl;
    }
}

//      *     
//     ***    
//    *****   
//   *******  
//  ********* 
void printpattern7(int n){
    for(int i=1;i<=n;i++){
        //space
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*i-1;j++){
            cout<<"*";
        }

        //space
        for(int j=0;j<=n-i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}

// *********
//  ******* 
//   *****  
//    ***   
//     *  
//     *   

//logic is correct but it also has strivers soution see that tommorow
void printpattern8(int n){
    
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //stars
        for(int j=2*n-i-1 ;j>i;j--){
            cout<<"*";
        }
        //space
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }
}
//not correct:- see striver soln tommorow
void printpattern9(int n){
    printpattern7(n);
    printpattern8(n);
    }

// *
// **
// ***
// ****
// *****
// *****
// ****
// ***
// **
// *

void printpattern10(int n){
    printpattern2(n);
    printpattern5(n);
}

//  1
//  2 3
//  4 5 6
//  7 8 9 10
//  11 12 13 14 15

void printpattern11(int n){
    int k=1;
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
            cout<<" "<<k;
            k++;
        }
        cout<<endl;
    }
}

// 1
// 01
// 101
// 0101
// 10101
// 010101
// 1010101
// 01010101

void printpattern12(int n){
    int k;
    for(int i=1;i<=n;i++){
        if(i%2==0)
            k=1;
        else
            k=0;
        for(int j=1;j<=i;j++){
            k=!k;
            cout<<k;
        
        }
        cout<<endl;
    }
}


// 1      1
// 12    21
// 123  321
// 12344321
void printpattern13(int n){
    for(int i=1;i<=n;i++){
        //value of <=i
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        //spaces
        for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
        //value of <=i
        for(int j=i;j>=1;j--){
            cout<<j;
        }
        cout<<endl;
        

    }
}

// A
// AB
// ABC
// ABCD
// ABCDE

void printpattern14(int n){
    for(int i=0;i<n;i++){
        char ch='A';
        for(int j=0;j<=i;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

// ABCDE
// ABCD
// ABC
// AB
// A

void printpattern15(int n){
    for(int i=1;i<=n;i++){
        char ch='A';
        for(int j=1;j<=n-i+1;j++){
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

// A
// BB
// CCC
// DDDD
// EEEEE

void printpattern16(int n){
    char ch='A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<=i;j++){
            cout<<ch;
            
        }
        ch++;
        cout<<endl;
    }
}

int main(){
    int test;  
    cin>>test;
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        printpattern16(n);
    }


}
