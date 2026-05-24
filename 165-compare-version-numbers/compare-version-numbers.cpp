class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,j=0;
        long long sum1=0,sum2=0;
        while(i<version1.length()||j<version2.length())
        {
            while(i<version1.length()&&version1[i]!='.')
            sum1=sum1*10+version1[i++]-'0';
            while(j<version2.length()&&version2[j]!='.')
            sum2=sum2*10+version2[j++]-'0';
            if(sum1>sum2)
            return 1;
            else if(sum2>sum1)
            return -1;
            sum1=0;
            sum2=0;
            i++;
            j++;
        }
        return 0;
    }
};