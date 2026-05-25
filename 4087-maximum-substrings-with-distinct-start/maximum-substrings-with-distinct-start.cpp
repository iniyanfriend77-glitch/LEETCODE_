class Solution {
public:
    int maxDistinct(string s) {
        vector<int> freq(26,0);
    int count=0;
        for(int i=0;i<s.length();i++)
        {
            freq[s[i]-'a']++;
            if(freq[s[i]-'a']==1)
                count++;
        }
        return count;
    }
};