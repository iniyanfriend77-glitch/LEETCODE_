class Solution {
public:
    int maxVowels(string s, int k) {
            int maxm=0;
            int count=0;
            int j=0;
            vector<int> freq(26,0);
            for(int i=0;i<s.length();i++)
            {
                int n=s[i]-'a';
                freq[n]++;
                if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
                    count++;
                if((i-k+1)>=0)
                {
                    maxm=max(maxm,count);
                    freq[s[j]-'a']--;
                    if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u')
                    count--;
                    j++;
                }
            }
        return maxm;
    }
};