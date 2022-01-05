// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string s)
{     
  //Your code here 
  char a = s[0];
  int count = 0;
  string h = "";
  
  for(int i=0; i<s.length(); i++)
  {
      if(a == s[i])
      {
          count++;
      }
      else
      {
          h+=a+to_string(count);
          a = s[i];
          count = 1;
      }
  }
  
  h+=a+to_string(count);
  
  return h;
}     
 
