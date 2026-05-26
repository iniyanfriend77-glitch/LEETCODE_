class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int> freq(26,0);
        int count=0;
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='a'&&word[i]<='z')
            {
                freq[word[i]-'a']++;
            }
        }
        for(int i=0;i<word.length();i++)
        {
            if(word[i]>='A'&&word[i]<='Z'&&freq[word[i]-'A']!=0)
            {
                count++;
                freq[word[i]-'A']=0;
            }
        }
        return count;
    }
};