class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> f1(26,0),f2(26,0),ans;;
        int k=p.length();
        int count=0;
        for(int i=0;i<p.length();i++)
        {
            f2[p[i]-'a']++;
        }
        for(int i=0;i<s.length();i++)
        {
            f1[s[i]-'a']++;
            if(f2[s[i]-'a']>=f1[s[i]-'a'])
            count++;
            if(i-k+1>=0)
            {
                if(count==k)
                ans.push_back(i-k+1);
                if(f1[s[i-k+1]-'a']<=f2[s[i-k+1]-'a'])
                count--;
                f1[s[i-k+1]-'a']--;
                
            }
        }
        return ans;
    }
};