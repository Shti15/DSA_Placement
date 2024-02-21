#include<bits/stdc++.h>
using namespace std;

int count_anagrams(string s, string p){
    //window start
    int i=0;
    int j=0;
    //initialize a map to store how many letters are there in string p and their count
    map<char,int> m;
    // final ans var to count anagrams
    int ans=0; 
    int k=0; //window size
    // loop to calculate window size which is equal to length of string p
    for(int l=0;l<p.length();l++){   
        k++;
    }
    // updating the count of letters in string p to map m
    for(char c : p) { 
        m[c]++;
    }
    // count taken as map size and as soon as count becomes 0 we get an anagram
    int count=m.size();  
    while(j<s.size()){  
        //if the letter is present in map decrement the count of that letter
        if(m.find(s[j])!=m.end()){  
             m[s[j]]--;
             //if the count of letter becomes 0 that means count of all letters is present in window
            if(m[s[j]]==0)  
                count--;
        }
       // if that window size is less than actual window size increment j
        if(j-i+1<k){  
            j++;
        }
        else if(j-i+1==k){
            //if count becomes 0 that means we got an anagram
            if(count==0){   
                ans++;
            }
            //slide window //while sliding window we need to remove all calculatiton of i from map
            if(m.find(s[i])!=m.end()){  
            //increment the count of letter in map   
            m[s[i]]++;   
            //if letter becomes 1 that means letter is present so add 1 to count
            if(m[s[i]]==1){ 
                count++;
            }
            
            }
            i++; 
            j++; 
        }
      
    }
    return ans;   
    
}
int main() {
    string s = "aabacdabaaba";
    string p = "aaba";

    
    cout << count_anagrams(s, p);
    return 0;
}