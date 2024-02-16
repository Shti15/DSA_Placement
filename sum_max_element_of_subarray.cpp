#include<bits/stdc++.h>
using namespace std;
int max_subarray(vector<int> &arr,int k){
    // create a window of size k
    int i=0;
    int j=0;
    int sum=0;
    int maxi=INT_MIN;
    while(j!=arr.size()){
        if(j-i+1<k){   //j-i+1 calculates the window size 
            sum+=arr[j];
            j++;
            }
        else{
            sum+=arr[j];
            maxi=max(maxi,sum);
            sum-=arr[i];
            i++;
            j++;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7,8,9,10};
    int k=3;
    cout<<max_subarray(arr,k);
}
