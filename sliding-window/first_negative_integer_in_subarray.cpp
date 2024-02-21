#include<bits/stdc++.h>
using namespace std;
vector<int> max_subarray(vector<int> &arr,int k){
    int i=0;
    int j=0;
    queue<int> q;
    vector<int> ans;
    while(j<arr.size()){
        //calculation
        if(arr[j]<0){
            q.push(arr[j]);
        }
        //current window size is less than actual window size increment j
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            //ans
            if(q.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back((q.front()));
            }
            //slide window
            if(arr[i]==q.front()){
                q.pop();
            }
            i++;
            j++;
        }

    }
    return ans;
}
int main() {
    vector<int> arr = {12,-1,-7,8,-15,30,16,28};
    int k = 3;
    vector<int> result = max_subarray(arr, k);
    for(int i = 0; i < result.size(); i++){
        cout << result[i] << " ";
    }
    return 0;

}
