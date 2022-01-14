/*
LONGEST MOUNTAIN CODE-> 

class Solution {
public:
    int longestMountain(vector<int>& a) {
        int ans = 0;
        int count = 1;
        bool check = false;
        bool more = false;
        for(int i=0; i<a.size()-1; i++)
        {
            // cout<<"---------------------------------"<<endl;
            // cout<<"value of count-> "<<count<<endl;
            // cout<<"value of ans-> "<<ans<<endl;
            
            if(check == true)
            {
                if(a[i+1]>a[i])
                {
                    if(more == false)
                    count++;
                    else
                    {
                        count = 2;
                        check = true;
                        more = false;
                    }
                }
                else if(a[i+1]<a[i])
                {
                    count++;
                    ans = max(count,ans);
                    more = true;
                }
                else
                {
                    check = false;
                    more = false;
                    count = 1;
                }
            }
            else
            {
                if(a[i+1]>a[i])
                {
                    check = true;
                    count++;
                }
            }
            // cout<<"value of count-> "<<count<<endl;
            // cout<<"value of ans-> "<<ans<<endl;
            // cout<<"---------------------------------"<<endl;
        }
        return ans;
    }
};

*/