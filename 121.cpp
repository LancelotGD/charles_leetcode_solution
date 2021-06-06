class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro=0,minnum=prices[0];
        for(int i=0;i<prices.size();i++){
            maxpro=max(maxpro,prices[i]-minnum);
            minnum=min(minnum,prices[i]);
        }
        return maxpro;
    }
};
