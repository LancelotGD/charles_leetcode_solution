class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> result;
        vector<int> p;
        dfs(candidates,p,target,result,0);
        return result;
    }
    void dfs(vector<int>& candidates,vector<int>& p,int sum,vector<vector<int>>& result,int start_idx){
        if(sum<0){
            return;
        }
        if(sum==0){
            result.push_back(p);
            return;
        }
        for(int i=start_idx;i<candidates.size();i++){
            p.push_back(candidates[i]);
            dfs(candidates,p,sum-candidates[i],result,i);
            p.pop_back();
        }
    }
};
