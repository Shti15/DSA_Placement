#include<bits/stdc++.h>
using namespace std;

int largest_sum(vector<int> &arr,int k){
    int i=0;
    int j=0;
    int sum=0;
    int maxi=INT_MIN;
    while(j<arr.size()){
        sum+=arr[j];    
        if(sum<k){   // untill my sum is less than k keep on increasing j
            j++;
        }
        else if(sum==k){   
            maxi=max(maxi,j-i+1);  // if sum is equal to k then calculate the length of subarray and update the max length
            j++;
        }
        else if(sum>k){  // if sum is greater than k then remove the elements from the start of the subarray untill sum is less than k
            while(sum>k){
                sum-=arr[i];
                i++;
            }
            j++;
        }
    }
    return maxi;
}
int main(){
    vector<int> arr={4,1,1,1,2,3,5};
    int k=5;
    int result=largest_sum(arr,k);
    cout<<result;
    return 0;   
}