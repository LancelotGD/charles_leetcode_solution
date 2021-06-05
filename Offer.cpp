class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxnum=nums[0];
        for(int i=1;i<nums.size();i++){
            nums[i]=nums[i-1]<0?nums[i]:nums[i]+nums[i-1];
            maxnum=max(maxnum,nums[i]);
        }
        return maxnum;
    }
};
