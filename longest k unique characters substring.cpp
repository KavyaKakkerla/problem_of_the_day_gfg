/*
  Input:
S = "aabacbebebe", K = 3
Output: 
7
Explanation: 
"cbebebe" is the longest substring with 3 distinct characters.*/


class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int ans=-1;
    map<char,int>mp;
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        mp[s[i]]++;
        if(mp.size()==k)
        {
            ans=max(ans,i-j+1);
        }
        if(mp.size()>k)
        {
            mp[s[j]]--;
            if(mp[s[j]]==0)
            {
                
                mp.erase(s[j]);
            }
            j++;
        }
    }
    return ans;
    }
};
