#include<bits/stdc++.h>
using namespace std;
void reverse_array_recursion_2ptr(int l,int r,int *arr){
    if(l>=r)
        return;
    swap(arr[l],arr[r]);
    reverse_array_recursion_2ptr(l+1,r-1,arr);

}
void reverse_Array_recursion_1ptr(int i,int n,int *arr){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    reverse_Array_recursion_1ptr(i+1,n,arr);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // reverse_array_recursion_2ptr(0,n-1,arr);
    reverse_Array_recursion_1ptr(0,n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}