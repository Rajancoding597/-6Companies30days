// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
   bool isNum(char a)
   {
       return (a >= '0' && a <='9');
   }
   
   string solve(string &s,int &n,int &i){
        string ans = "";
        int num = 0;
        for(;i<n;i++){
            // if we get a number
            if(isNum(s[i])){
                num = num * 10 + (s[i] - '0');
            }
            // we can get an open bracket
            else if(s[i] == '['){
                i++;
                string temp = solve(s,n,i);
                while(num--)    
                    ans += temp;
                num = 0;
            }
            // we can get a close bracket
            else if(s[i] == ']'){
                return ans;
            }
            // we can get alphabets
            else{
                ans += s[i];
            }
        }
        return ans;
    }
   
    string decodedString(string s){
        // code here
        int i=0,n=s.length();
        return solve(s,n,i);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}  // } Driver Code Ends