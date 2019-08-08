class Solution {
public:
    bool canJump(vector<int>& nums) {
        int length=nums.size();
        int dest=length-1;
        for(int i=dest;i>=0;i--)
        {
            if(i+nums[i]>=dest)
                dest=i;
        }
        return dest==0;
    }
};