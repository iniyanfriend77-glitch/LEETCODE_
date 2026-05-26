class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
       int count=0;
       unordered_map<int,int> mp;
       int j=0;
       for(int i=0;i<nums.size();i++)
       {
        mp[nums[i]]++;
        while(mp.size()>k)
        {
            mp[nums[j]]--;
            if(mp[nums[j]]==0)
            mp.erase(nums[j]);
            j++;
        }
        count+=i-j+1;
       }
       unordered_map<int,int> ump;
       k-=1;
       int count2=0;
       j=0;
       for(int i=0;i<nums.size();i++)
       {
        ump[nums[i]]++;
          while(ump.size()>k)
        {
            ump[nums[j]]--;
            if(ump[nums[j]]==0)
            ump.erase(nums[j]);
            j++;
        }
        count2+=i-j+1;
       }
       return count-count2;
    }
};