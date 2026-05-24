class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       map<int,int> mp;
       int j=0,maxm=0;
       for(int i=0;i<fruits.size();i++)
       {
        mp[fruits[i]]++;
        while(mp.size()>2)
        {
            mp[fruits[j]]--;
            if(mp[fruits[j]]==0)
            mp.erase(fruits[j]);
            j++;
        }
        maxm=max(maxm,i-j+1);
       }
    
       return maxm;
}
};