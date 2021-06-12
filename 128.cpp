class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set;
        for(int num:nums){
            nums_set.emplace(num);
        }
        int maxlength=0,currentlength=0;
        for(int num:nums_set){
            int currentNum=num;
            if(nums_set.find(currentNum-1)==nums_set.end()){
                currentlength=1;
                while(nums_set.find(currentNum+1)!=nums_set.end()){
                    currentNum++;
                    currentlength++;
                }
                maxlength=max(currentlength,maxlength);
            }
        }
        return maxlength;
    }
};
