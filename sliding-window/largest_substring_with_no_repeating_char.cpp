#include<bits/stdc++.h>
using namespace std;

int larg_str(string s){
    int i=0;
    int j=0;
    map<char,int> m;
    int maxi=INT_MIN;
    while(j<s.size()){
        m[s[j]]++;
        if(m.size()==j-i+1){
            maxi=max(maxi,j-i+1);
            j++;
        }
        else if(m.size()<j-i+1){
            while(m.size()<j-i+1){
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
    string s="pwexpwe";
    int result=larg_str(s);
    cout<<result;
    return 0;
}
