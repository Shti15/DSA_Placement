#include<bits/stdc++.h>
using namespace std;

int larg_str(string s,int k){
    int i=0;
    int j=0;
    map<char,int> m;
    int maxi=INT_MIN;
    while(j<s.size()){
        m[s[j]]++;
        if(m.size()<k){
            j++;
        }
        else if(m.size()==k){
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(m.size()>k){
            while(m.size()>k){
                m[s[i]]--;
                if(m[s[i]]==0){
                    m.erase(s[i]);

                }

                i++;
            }
            j++;
        }
    }
    return maxi;

}
int main(){
    string s="aabacbebebe";
    int k=3;
    int result=larg_str(s,k);
    cout<<result;
    return 0;
}