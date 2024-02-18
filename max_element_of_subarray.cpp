#include<bits/stdc++.h>
using namespace std;
vector<int> max_subarray(vector<int> &arr,int k){
    int i=0;
    int j=0;
    list<int> q;
    vector<int> ans;
    while(j<arr.size()){
        //calculation 
        while(q.size()>0 && q.back()<arr[j]){
            q.pop_back();
        }
        q.push_back(arr[j]);
        if(j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            // ans calculate
            ans.push_back(q.front());
            //slide window 
            // remove i calcn
            if(q.front()==arr[i])
                q.pop_front();
            i++;
            j++;
        }

        }
    
    return ans;
}
int main(){
    vector<int> arr={10,12,8,-1,6,0,-2};
    int k=3;
    vector<int> result=max_subarray(arr,k);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;   
}