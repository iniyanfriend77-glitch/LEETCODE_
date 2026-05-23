class Solution {
public:
    bool check(vector<int>& nums) {
        int f=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]>nums[i+1])
            f++;
        }
     if(f==0||f==1&&nums[0]>=nums[nums.size()-1])
     return true;
     return false;   
    }
};