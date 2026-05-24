class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int count=0,maxm=0;
        int i=0,j=tokens.size()-1;
        while(j>=i)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                count++;
                i++;
            }
            else if(power<tokens[i]&&count>0)
            {
                power+=tokens[j];
                count--;
                j--;
            }
            else if(power<tokens[i]&&count==0)
            {
                return maxm;
            }
            maxm=max(maxm,count);
        }
        return maxm;
    }
};