// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ull unsigned long long


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// #define ull unsigned long long
	/* Function to get the nth ugly number*/
	long getNthUglyNo(int n) {
       long dp[n+1];
       dp[1]=1;
       int ptr1=1;
       int ptr2=1;
       int ptr3=1;
       for(int i=2;i<=n;i++)
       {
           long val1=dp[ptr1]*2;
           long val2=dp[ptr2]*3;
           long val3=dp[ptr3]*5;
           long mini=min(val1,min(val2,val3));
           dp[i]=mini;
           //agr same number ko ptr many ptrs thne mtlb ki next ugy number ko dhoondo else 
           //duplicacy hp jaegi
           if(mini==val1)
           ptr1++;
           if(mini==val2)
           ptr2++;
           if(mini==val3)
           ptr3++;
       }
       return dp[n];
   }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        auto ans = ob.getNthUglyNo(n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends