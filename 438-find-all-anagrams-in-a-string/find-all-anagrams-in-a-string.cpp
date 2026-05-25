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
            if(i-k+1>=0)
            {
                if(f1==f2)
                ans.push_back(i-k+1);
                f1[s[i-k+1]-'a']--;
            }
        }
        return ans;
    }
};